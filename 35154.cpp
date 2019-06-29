#include <bits/stdc++.h>
using namespace std;

/*
Problem:Coder or NonCoder
Programmer:Iles Illes Tamas
Date:2019.06.29
 */

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b;
        cin>>a>>b;
        float f=a/100*b+(100-a)/100*(100-b);
        printf("%.2f%\n",f);
    }
    return 0;
}
