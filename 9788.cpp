#include <bits/stdc++.h>
using namespace std;

/*
Problem:Friends of Friends
Programmer:Iles Illes Tamas
Date:2019.04.15
 */

int main()
{
    int t,a,sum=0;
    cin>>t;
    string s;
    map<string,int> k;
    while (t--)
    {
        cin>>s>>a;
        k[s]=2;
        while (a--)
        {
            cin>>s;
            if (k[s]!=2)
            {
                k[s]=1;
            }
        }
    }
    for (auto it=k.begin();it!=k.end();++it)
    {
        if (it->second!=2)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
