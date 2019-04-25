#include <bits/stdc++.h>
using namespace std;

/*
Problem:Triangular Prism
Programmer:Iles Illes Tamas
Date:2019.04.25
 */

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        double a=pow(4*k,1/3.0);
        double h=k*4/(a*a*sqrt(3));
        printf("%.10f\n",a*a*sqrt(3)/2+3*a*h);
    }
    return 0;
}
