#include <bits/stdc++.h>
using namespace std;

/*
Problem:abs(b-a)
Programmer:Iles Illes Tamas
Date:2019.04.22
 */

int main()
{
    int t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        long long sum,last,a,b;
        cin>>a;
        sum=0;
        last=0;
        for (int i=1;i<k;i++)
        {
            cin>>b;
            last+=i*abs(b-a);
            sum+=last;
            a=b;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
