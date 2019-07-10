#include <bits/stdc++.h>
using namespace std;
#define mod 10000007

/*
Problem: Just Add It
Programmer: Iles Illes Tamas
Date: 2019.07.10
 */
long modpow(long long x,int y)
{
    long res=1;
    x=x%mod;
    while (y>0)
    {
        if(y&1)
            res=(res*x)%mod;
        y=y>>1;
        x=(x*x)%mod;
    }
    return res;
}

int main()
{
    int k;
    long long a1,a2,a3,a4,n;
    while(cin>>n>>k&&n+k!=0)
    {
        a1=modpow(n,n);
        a2=2*modpow(n-1,n-1)%mod;
        a3=modpow(n,k);
        a4=2*modpow(n-1,k)%mod;
        cout<<(a1+a2+a3+a4)%mod<<"\n";
    }
    return 0;
}
