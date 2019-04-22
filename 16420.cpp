#include <bits/stdc++.h>
using namespace std;

/*
Problem:Even Numbers
Programmer:Iles Illes Tamas
Date:2019.04.15
 */

int main()
{
    int k,t,c;
    cin>>t;
    while (t--)
    {
        c=0;
        cin>>k;
        if (k%2==0)
        {
            while (k>=pow(2,c))
            {
                c++;
            }
            bitset<32> a(k);
            bitset<32> b;
            for (int i=0;i<c;i++)
            {
                if (a[i]==1)
                {
                    b.set(c-1-i);
                }
            } 
            cout<<b.to_ulong()<<endl;   
        }
        else
        {
            cout<<k<<endl;
        }
    }
    return 0;
}
