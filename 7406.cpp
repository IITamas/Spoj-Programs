#include <bits/stdc++.h>
using namespace std;

/*
Problem:Beehive Numbers
Programmer:Iles Illes Tamas
Date:2019.04.22
 */

int main()
{
    int sum=1;
    int i=0;
    int t;
    vector<int> k;
    while (sum<=1000000000)
    {
        i++;
        k.push_back(sum);
        sum+=6*i;
    }
    while (cin>>t&&t!=-1)
    {
        if (binary_search(k.begin(),k.end(),t))
        {
            cout<<"Y\n";
        }
        else
        {
            cout<<"N\n";
        }
    }
    return 0;
}
