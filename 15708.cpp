#include <bits/stdc++.h>
using namespace std;

/*
Problem:Divisibility
Programmer:Iles Illes Tamas
Date:2019.04.10
 */

int main()
{
    int t;
    int a,b,c;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        for (int i=b;i<a;i+=b)
        {
            if (i%c!=0)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
