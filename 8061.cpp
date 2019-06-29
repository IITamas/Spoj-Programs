#include <bits/stdc++.h>
using namespace std;

/*
Problem:Christmas Play
Programmer:Iles Illes Tamas
Date:2019.06.03
 */

int main()
{
    int t,m,k;
    cin>>t;
    while (t--)
    {
        cin>>m>>k;
        int a[m];
        for (int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a,a+m);
        int min=a[m-1]-a[0];
        for (int i=0;i<=m-k;i++)
        {
            if (min>(a[i+k-1]-a[i]))
            {
                min=a[i+k-1]-a[i];
            }
        }
        cout<<min<<"\n";
    }
    return 0;
}
