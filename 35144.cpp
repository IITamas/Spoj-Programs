#include <bits/stdc++.h>
using namespace std;

/*
Problem:High CG Boy
Programmer:Iles Illes Tamas
Date:2019.04.05
 */

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        float k;
        cin>>a>>k;
        a--;
        printf("%.2f\n",(a*k*5+(8-a)*20.0)/40);
    }
    return 0;
}
