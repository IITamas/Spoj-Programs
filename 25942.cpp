#include <bits/stdc++.h>
using namespace std;

/*
Problem: Ball sum
Programmer: Iles Illes Tamas
Date: 2019.07.02 
 */

long long gcd (long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
	long long n,k;
	while(cin>>n>>k&&n+k!=-2)
   	{
        long long p=n*(n-1)/2;
        long long q=0;
        if (k%2==0)
        {
            k--;
            q+=k/2;
        }    
        q+=(k/2)*(k/2);
        int g=gcd(p,q);
        if (p==q)
        {
            cout<<1<<endl;
        }
        else if(q==0)
        {
            cout<<0<<endl;
        }
        else 
        {
            cout<<q/g<<'/'<<p/g<<"\n";
        }
	}

	return 0;
}
