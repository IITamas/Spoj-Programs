#include <bits/stdc++.h>
using namespace std;

/*
Problem: Wise and Miser
Programmer: Iles Illes Tamas
Date: 2019.07.01
 */

int main()
{
    int a,b,c[101][101];
    cin>>a>>b;
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            cin>>c[i][j];
    int dp[101][101];
    for (int i=0;i<b;i++)
        dp[0][i]=c[0][i];
    for (int i=1;i<a;i++)
    {
        dp[i][0]=c[i][0]+min(dp[i-1][0],dp[i-1][1]);
        for (int j=1;j<b-1;j++)
        {
            dp[i][j]=c[i][j]+min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]));
        }
        dp[i][b-1]=c[i][b-1]+min(dp[i-1][b-1],dp[i-1][b-2]);
    }
    int min=INT_MAX;
    for(int i=0;i<b;i++)
    {
        if(min>dp[a-1][i])min=dp[a-1][i];
    }
    cout<<min;
    return 0;
}
