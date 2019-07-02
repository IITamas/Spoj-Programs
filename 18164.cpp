#include <bits/stdc++.h>
using namespace std;

/*
Problem: Atoms in the Lab
Programmer: Iles Illes Tamas
Date: 2019.07.02 
 */

int main()
{
    int p;
    long long n,k,m;
    cin>>p;
    while(p--)
    {
        cin>>n>>k>>m;
        float c=(log10(m)-log10(n))/log10(k);
        cout<<(c<0?0:floor(c))<<"\n";
    }
    return 0;
}
