#include <bits/stdc++.h>
using namespace std;

/*
Problem:New Data type
Programmer:Iles Illes Tamas
Date:2019.06.29
 */

int power(int x, long long y, int p) 
{ 
    int res = 1;  
    x = x % p; 
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1;
        x = (x*x) % p;   
    } 
    return res==0?p:res; 
} 

int main()
{
    long long a,b;
    int t,c;
    cin>>t;
    while(t--)
    {
        scanf("%lld %lld %d",&a,&b,&c);
        printf("%d\n",power(a%c,b,c));
    }
    return 0;
}
