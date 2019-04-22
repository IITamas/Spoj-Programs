#include <bits/stdc++.h>
using namespace std;

/*
Problem:Maximal Quadrilateral Area
Programmer:Iles Illes Tamas
Date:2019.04.20
 */

int main()
{
    int t;
    cin>>t;
    double e,s,a,b,c,d;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        s=(a+b+c+d)/2;
        e=sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%.2f\n",e);
    }
    return 0;
}
