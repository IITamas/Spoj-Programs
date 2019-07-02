#include <bits/stdc++.h>
using namespace std;

/*
Problem: Foxling Feeding Frenzy
Programmer: Iles Illes Tamas
Date: 2019.07.02
 */

int main()
{
    int t,m,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        long long dp[m+1][n+1];
        for (int i=0;i<=m;i++)
            for (int j=0;j<=n;j++) dp[i][j]=0;
        dp[0][0]=1;
        for (int i=1;i<=m;i++)
        {
            cin>>a>>b;
            for(int j=a;j<=b;j++)
            {
                for(int k=j;k<=n;k++)
                {
                    dp[i][k]+=dp[i-1][k-j];
                }
            }
        }
        cout<<dp[m][n]<<endl;
    }

    return 0;
}
