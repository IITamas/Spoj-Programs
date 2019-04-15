#include <bits/stdc++.h>
using namespace std;

/*
Problem:Complete the Sequence
Programmer:Iles Illes Tamas
Date:2019.04.14
 */

int first;
vector<int> m_of_diff(vector<int> a,int s,int r)
{
    first=a[0];
    if (all_of(a.begin(),a.end()+s,[](int i){return i==first;}))
    {
        for (int i=s;i<r;i++)
        {
            a[i]=first;
        }
        return a;
    }
    vector<int>b(r,0);
    for (int i=0;i<s-1;i++)
    {
        b[i]=a[i+1]-a[i];
    }
    b=m_of_diff(b,s-1,r);
    for (int i=s;i<r;i++)
    {
        a[i]=a[i-1]+b[i-1];
    } 
    return a;
}

int main()
{   
    int t;
    cin>>t;
    while (t--)
    {
        int size,rem;
        cin>>size>>rem;
        rem=size+rem;
        vector<int> a(rem,0);
        for (int i=0;i<size;i++)
        {
            cin>>a[i];
        }
        a=m_of_diff(a,size,rem);
        for (int i=size;i<rem;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;	
}
