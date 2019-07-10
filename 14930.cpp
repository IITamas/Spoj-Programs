#include <bits/stdc++.h>
using namespace std;

/*
Problem: Princess Farida
Programmer: Iles Illes Tamas
Date: 2019.07.09
 */

int main()
{
    int t;
    cin>>t;
    for (int c=1;c<=t;c++)
    {
        int a;
        long long mmax;
        cin>>a;
        long long b[a],dp[a+1];
        for (int i=0;i<a;i++)
        {
            cin>>b[i];
        }
        if (a==0)
        {
            mmax=0;
        }
        else if (a==1)
        {
            mmax=b[0];
        }
        else if (a==2)
        {
            mmax=max(b[0],b[1]);
        }
        else
        {
            dp[0]=b[0];
            dp[1]=max(b[0],b[1]);
            for (int i=2;i<a;i++)
            {
                dp[i]=max(dp[i-1],dp[i-2]+b[i]);
            }
            mmax=dp[a-1];
        }
        cout<<"Case "<<c<<": "<<mmax<<"\n";
    }
}
