#include <bits/stdc++.h>
using namespace std;

/*
Problem:Two squares or not two squares
Programmer:Iles Illes Tamas
Date:2019.04.20
 */

bool is_sum(long long int a)
{
    double b;
    for (long long int i=0;i*i<a;i++)
    {
        b=sqrt(a-i*i);
        if (b==(int)b)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    long long int a;
    while(t--)
    {
        cin>>a;
        if (is_sum(a))
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
