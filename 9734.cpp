#include <bits/stdc++.h>
using namespace std;

/*
Problem:Hacking the Random Number Generator
Programmer:Iles Illes Tamas
Date:2019.04.20
 */

int main()
{
    int sum,n,k,max=0;
    cin>>n>>k;
    int a[n];
    sum=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (max<a[i])
        {
            max=a[i];
        }
    }
    sort(a,a+n);
    for (int i=0;i<n;i++)
    {
        if (max<(a[i]+k))
        {
            break;
        }
        if (binary_search(a+i,a+n,a[i]+k))
        {
            sum++;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
