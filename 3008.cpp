#include <bits/stdc++.h>
using namespace std;

/*
Problem:Finding the Top RPS Player
Programmer:Iles Illes Tamas
Date:2019.04.25
 */

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i=1,n,k,m,sumnum,nul;
    while(cin>>n>>m&&n!=0||m!=0)
    {
        int a[n]={0};
        a[0]=n;
        sumnum=0;
        nul=0;
        while(a[m]==0)
        {
           sumnum++;
           nul=0;
           for (int j=m;j>=0;j--)
           {
               k=a[j]/2;
               a[j+1]+=k;
               nul+=k;
               a[j]=a[j]%2;
           }
           a[0]+=nul;
        }
        printf("Case %d: %d\n",i,sumnum);
        i++;
    }
    return 0;
}
