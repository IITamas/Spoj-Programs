#include <bits/stdc++.h>
using namespace std;

/*
Problem:DOTA HEROES
Programmer:Iles Illes Tamas
Date:2019.04.18
 */

int main()
{
    int t;
    int a,b,c,d;
    cin>>t;
    while (t--)
    {
        int sum=0;
        cin>>a>>b>>c;
        while(a--)
        {
            cin>>d;
            sum+=d/c;
            if (d%c==0&&d/c!=0)
            {
                sum--;
            }
        }
        if (sum>=b)
        {
            cout<<"YES\n"; 
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
