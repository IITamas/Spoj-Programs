#include <bits/stdc++.h>
using namespace std;

/*
Problem:Sorting Bank Accounts
Programmer:Iles Illes Tamas
Date:2019.04.10
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while (t--)
    {
        map<string,int>m;
        int k;
        cin>>k;
        string s;
        getline(cin,s);
        while(k--)
        {
            getline(cin,s);    
            if (m.find(s)==m.end())
            {
                m.emplace(s,1);
            }
            else
            {
                m[s]=m[s]+1; 
            }
        }
        for (auto &it: m)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        getline(cin,s);
        cout<<endl;
    }
}
