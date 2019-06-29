#include <bits/stdc++.h>
using namespace std;

/*
Problem:Eko
Programmer:Iles Illes Tamas
Date:2019.05.04
*/

bool chop(int k[],int n,int a,int b)
{
    int sum=0;
    for (int i=0;i<a;i++)
    {
        if (k[i]-n>0)
        {
            sum+=k[i]-n;
            if (sum>=b)
            {
                return true;
            }
        }
    }
    return false;
}

int binary(int k[],int a,int b)
{
    int min=0;
    int max=k[a-1];
    int val=max/2;
    int mid=val;
    while(1)
    {
        val=val/2+1;
        if (chop(k,mid,a,b))
        {
            if (!chop(k,mid+1,a,b))
            {
                return mid;
            }
            else
            {
                mid+=val;
            }
        }
        else
        {
            if (chop(k,mid-1,a,b))
            {
                return mid-1;
            }
            else
            {
                mid-=val;
            }
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    int k[a];
    for(int i=0;i<a;i++)
    {
        cin>>k[i];
    }
    sort(k,k+a);
    cout<<binary(k,a,b)<<endl;
    return 0;
}
