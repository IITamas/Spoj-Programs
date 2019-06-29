#include <bits/stdc++.h>
using namespace std;

/*
Problem:Aggressive Cows
Programmer:Iles Illes Tamas
Date:2019.05.04
 */

bool greedy(int k[],int a,int n,int val)
{
    int last=k[0];
    int passed=1;
    for (int i=1;i<a;i++)
    {
        if(k[i]-last>=val)
        {
            last=k[i];
            passed++;
            if (passed==n)
            {
                return true;
            }
        }
    }
    return false;
}

int binary_search(int k[],int a,int b)
{
    int max=k[a-1]/(b-1);
    int min=max;
    for (int i=1;i<a;i++)
    {
        if (k[i]-k[i-1]<min)
        {
            min=k[i]-k[i-1];
        }
    }
    int val=(max-min)/2;
    int mid=max-val;
    bool can_do,c;
    while(1)
    {
        val=val/2+1;
        can_do=greedy(k,a,b,mid);
        if (can_do)
        {
            c=greedy(k,a,b,mid+1);
            if (!c)
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
            c=greedy(k,a,b,mid-1);
            if (c)
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
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int k[a];
        for (int i=0;i<a;i++)
        {
            cin>>k[i];
        }
        sort(k,k+a);
        cout<<binary_search(k,a,b)<<"\n";
    }
}
