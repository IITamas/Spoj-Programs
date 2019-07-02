#include <bits/stdc++.h>
using namespace std;

/*
Problem: PLAYING WITH BITS
Programmer: Iles Illes Tamas
Date: 2019.07.02
 */

int main()
{
    int t,n,k,n1,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        n1=n;
        i=0;
        if (k==0)
        {
           cout<<"-1\n";
        }
        else
        {
            while(n1!=0)
            {
                n1/=2;
                i++;
            }
            n1=1;
            while(k!=1&&i!=0)
            {
                if(n1+pow(2,i)<n)
                {
                    n1+=pow(2,i);
                    k--;
                }
                i--;
            }
            cout<<n1<<"\n";
        }
    }
    return 0;
}
