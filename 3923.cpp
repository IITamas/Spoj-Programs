#include <bits/stdc++.h>
using namespace std;

/*
Problem: Philosophers Stone
Programmer: Iles Illes Tamas
Date: 2019.07.01
 */

int func(int a, int b, int c[101][101])
{
    int dp[a][b];
    for (int i=0;i<b;i++)
    {
        dp[0][i]=c[0][i];
    }
    for (int i=1;i<a;i++)
    {
        dp[i][0]=c[i][0]+max(dp[i-1][0],dp[i-1][1]);
        for (int j=1;j<b-1;j++)
        {
            dp[i][j]=c[i][j]+max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]));
        }
        dp[i][b-1]=c[i][b-1]+max(dp[i-1][b-2],dp[i-1][b-1]);
    }
    int max=0;
    for(int i=0;i<b;i++)
    {
        if(dp[a-1][i]>max)
            max=dp[a-1][i];
    } 
    return max;
}

int main()
{
    int a,b,t;
    int c[101][101];
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
                cin>>c[i][j];
        cout<<func(a,b,c)<<endl;
    }
    return 0;
}
