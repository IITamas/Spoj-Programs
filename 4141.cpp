#include <bits/stdc++.h>
using namespace std;

/*
Problem:Euler Totient Function
Programmer:Iles Illes Tamas
Date:2019.07.01
 */

int phi(int n)
{
    int result=n;
    for (int p=2;p*p<=n;p++)
    {
        if (n%p==0)
        {
            while(n%p==0)
            {
                n/=p;
            }
            result-=result/p;
        }
    
    }
    if (n>1)
    {
        result-=result/n;
    }
    return result;
}

int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<phi(a)<<"\n";
    }
    return 0;
}
