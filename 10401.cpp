#include <bits/stdc++.h>
using namespace std;

/*
Problem: Aliens at the train
Programmer: Iles Illes Tamas
Date: 2019.07.03
 */

int main()
{
    int t;
    int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int c[a+1];
        c[a+1]=INT_MAX;
        for(int i=0;i<a;i++)
        {
            cin>>c[i];
        }
        int *n1,*n2;
        int sum=0;
        int min=INT_MAX;
        int d=0;
        int max=0;
        n1=&c[0];
        n2=&c[0];
        while(*n1!=INT_MAX&&*n2!=INT_MAX)
        {
            if (*n1>b)
            {
                n1++;
                n2=n1;
                sum=0;
                d=0;
            }
            if (sum+*n1<=b)
            {
                sum+=*n1;
                n1++;
                d++;
            }
            else 
            {
               sum-=*n2;
               n2++;
               d--; 
            }
            if (d==max&&min>sum&&sum<=b&&sum>0)
            {
                min=sum;
            }
            else if(d>max&&sum<=b&&sum>0)
            {
                max=d;
                min=sum;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
