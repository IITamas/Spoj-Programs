#include <bits/stdc++.h>
using namespace std;

/*
Problem:Subarray
Programmer:Iles Illes Tamas
Date:2019.04.10
 */

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,k;
    cin>>t;
    long long int a[t];
    for (int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for (int i=0;i<=t-k;i++)
    {
        cout<<*max_element(a+i,a+i+k)<<" ";
    }
    return 0;
}
