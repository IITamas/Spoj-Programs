#include <bits/stdc++.h>
using namespace std;

/*
Problem:Play with Math
Programmer:Iles Illes Tamas
Date:2019.04.20
 */

long long int gcd(long long int a,long long int b)
{
    if (a>b)
    {
        return gcd(a-b,b);
    }
    else if (a<b)
    {
        return gcd(a,b-a);
    }
    else
    {
        return a;
    }

}

long long int lcm(long long int a, long long int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        long long int c=lcm(a,b);
        cout<<(c/a)<<" "<<(c/b)<<endl;
    }
    return 0;
}
