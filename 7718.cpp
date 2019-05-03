#include <bits/stdc++.h>
using namespace std;

/*
Problem:Number of Common Divisors
Programmer:Iles Illes Tamas
Date:2019.05.02
 */

int gcd(int a,int b)
{
    if(b)
    {
        gcd(b,a%b);
    }
    else
    {
        return a;
    }
}

int sol(int a,int b)
{
    int num,sum=1;
    if (a<b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    num=gcd(a,b);
    int i=2;
    map<int,int>k;
    while(num!=1)
    {
        if (num%i==0)
        {   
            k[i]++;
            num/=i;
        }
        else 
        {
            if (i!=2)
            {
                i+=2;
            }
            else
            {
                i++;
            }
        }
    }
    for (auto it=k.begin();it!=k.end();it++)
    {
        sum+=sum*it->second;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<sol(a,b)<<"\n";
    }
    return 0;
}
