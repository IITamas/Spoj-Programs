#include <bits/stdc++.h>
using namespace std;

/*
Problem:Seetha's Unique Game
Programmer:Iles Illes Tamas
Date:2019.04.25
 */

bool bigger(int a,int b)
{
    return a>b;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,h,n,c;
        cin>>a>>b>>h>>n>>c;
        int d[c];
        for (int i=0;i<c;i++)
        {
            cin>>d[i];
        }
        sort(d,d+c,bigger);
        int i=0;
        while (n<=h)
        {
            n+=d[i];
            i++;
        }
        cout<<i<<endl;
    }

    return 0;
}
