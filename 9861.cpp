#include<bits/stdc++.h>
using namespace std;

/*
Problem: Hotels Along the Croatian Coast
Programmer: Iles Illes Tamas
Date: 2019.06.28
 */

int main()
{
    int a,b;
    cin>>a>>b;
    int c[a];
    for (int i=0;i<a;i++)
    {
        cin>>c[i];
    }
    int *k1;
    int *k2;
    k1=&c[0];
    k2=&c[0];
    int max=0,sum=0;
    while(k2!=&c[a]||sum>b)
    {
        if(*k2==b)
        {
            max=b;
            break;
        }
        else if(*k2>b)
        {
            k2++;
            k1=k2;
            sum=*k2;
        }
        else
        {
            if(sum>b)
            {
                sum=sum-*k1;
                k1++;
            }
            else
            {
                sum=sum+*k2;
                k2++;
            }
        }
        if(sum<=b&&max<sum)
        {
            max=sum;
        }
    }
    cout<<max<<endl;
    return 0;
}
