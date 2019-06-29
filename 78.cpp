#include <bits/stdc++.h>
using namespace std;

/*
Problem: Marbles
Programmer: Iles Illes Tamas
Date: 2019.06.28
*/

long long NCR(int n, int r)
{
    if (r == 0) return 1;   
    if (r > n / 2) return NCR(n, n - r); 
    long long res = 1; 
    for (int k = 1; k <= r; ++k)
    {
        res *= n - k + 1;
        res /= k;
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r;
        cin>>n>>r;
        cout<<NCR(n-1,r-1)<<endl;
    }
    return 0;
}
