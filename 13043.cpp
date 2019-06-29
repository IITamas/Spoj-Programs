#include <bits/stdc++.h>
using namespace std;

/*
Problem: The Mirror of Galadriel
Programmer: Iles Illes Tamas
Date: 2019.06.29
 */

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<(s.find(string(s.rbegin(),s.rend()))?"NO\n":"YES\n");
    }
    return 0;
}
