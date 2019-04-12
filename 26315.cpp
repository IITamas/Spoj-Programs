#include <bits/stdc++.h>
using namespace std;

/*
Problem:Crazy Smoker
Programmer:Iles Illes Tamas
Date:2019.04.10
 */

int main()
{
    long long int n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(11-(30*n)%11)%11<<endl;
    }
    return 0;
}
