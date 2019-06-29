#include <bits/stdc++.h>
using namespace std;

/*
Problem: He is offside!
Programmer:Iles Illes Tamas
Date:2019.06.28
 */

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    while(cin>>a>>b&&a!=0&&b!=0)
    {
        int k1,k;
        cin>>k;
        for(int i=1;i<a;i++)
        {
            cin>>k1;
            if(k>k1)k=k1;
        }
        int c[b];
        for (int j=0;j<b;j++)
        {
            cin>>c[j];
        }
        sort(c,c+b);
        if(c[1]<=k)cout<<"N"<<endl;
        else cout<<"Y"<<endl;
    }
    return 0;
}
