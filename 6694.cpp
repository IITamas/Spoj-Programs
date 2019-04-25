#include <bits/stdc++.h>
using namespace std;

/*
Problem:D-playing with Marbles
Programmer:Iles Illes Tamas
Date:2019.04.25
 */

int main()
{
    int k;
    while (cin>>k&&k!=0)
    {
        k++;
        cout<<(3*k*k-k)/2<<endl;
    }
    return 0;
}
