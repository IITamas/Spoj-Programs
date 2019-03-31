#include <iostream>
#include <cmath>
using namespace std;

/*
Problem:Count Triangle
Programmer:Iles Illes Tamas
Date:2019.03.31
 */

int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(n*(n+2)*(2*n+1))/8<<endl;
    }
    return 0;
}
