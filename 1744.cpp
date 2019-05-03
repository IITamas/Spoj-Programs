#include <bits/stdc++.h>
using namespace std;

/*
Problem:Evaluate the polynomial
Programmer:Iles Illes Tamas
Date:2019.05.02
 */

int main()
{
    int k,n,x;
    long long int sum;
    int i=1;
    while ((cin>>k)&&(k!=-1))
    {
        int c[k+1];
        for (int i=0;i<=k;i++)
        {
            cin>>c[i];
        }
        cin>>n;
        int x;
        cout<<"Case "<<i<<":\n";
        i++;
        for (int i=0;i<n;i++)
        {
           sum=0;
           cin>>x;
           for (int j=0;j<=k;j++)
           {
               sum+=c[j]*pow(x,k-j);
           }
           cout<<sum<<endl;
        }
    }
    return 0;
}

