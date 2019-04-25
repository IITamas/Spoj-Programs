#include <bits/stdc++.h>
using namespace std;

/*
Problem:Game with numbers
Programmer:Iles Illes Tamas
Date:2019.04.22
 */

int main()
{
    int t;
    cin>>t;
    if (t%10==0)
    {
        cout<<"2\n";
    }
    else
    {
        cout<<"1\n"<<t%10;
    }
    return 0;
}
