#include <bits/stdc++.h>
using namespace std;

/*
Problem: Coder First Problem
Programmer: Iles Illes Tamas
Date: 2019.06.29
 */

int main()
{
    int t;
    cin>>t;
    int i=0;
    if (t==1)
    {
        cout<<1;
    }
    else
    {
        while (t%2==0)
        {
            t/=2;
            i+=2;
        }
        cout<<i;
    }
    return 0;
}
