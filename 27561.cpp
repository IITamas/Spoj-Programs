#include <bits/stdc++.h>
using namespace std;

/*
Problem:Greatest common divisor of three numbers
Programmer:Iles Illes Tamas
Date:2019.04.07
 */

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    cout<<__gcd(a,__gcd(b,c))<<endl;
}
