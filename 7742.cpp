#include <bits/stdc++.h>
using namespace std;

/*
Problem:Onotole needs your help
Programmer:Iles Illes Tamas
Date:2019.04.01
 */

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k,l;
    cin>>k;
    int n[k];
    for(int i=0;i<k;i++)
    {
        cin>>n[i];
    }
    int result=0; 
    for (int i=0;i<k;i++)
    {
        result ^= n[i]; 
    }
    cout<<result<<endl;
    return 0;
}
