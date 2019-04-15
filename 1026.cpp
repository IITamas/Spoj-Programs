#include <bits/stdc++.h>
using namespace std;

/*
Problem:Favourite Dice
Programmer:Iles Illes Tamas
Date:2019.04.15
 */

int main()
{
    int k,n;
    double l;
    cin>>k;
    while(k--)
    {
        l=0;
        cin>>n;
        for (int i=1;i<=n;i++)
        {
            l+=(double)n/i;
        }
        printf("%.2f\n",l);
    }
    return 0;
}
