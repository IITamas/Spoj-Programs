#include <bits/stdc++.h>

/*
Problem:Last Digit re-visited
Programmer:Iles Illes Tamas
Date:2019.04.11
 */

long long int modular_pow(int base,long long int exponent)
{
    long long int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result=(result*base)%10;
        exponent=exponent>>1;
        base =(base*base)%10;
    }
    return result;
}

int main()
{
	int t;
	long long int b;
	int a;
    std::string s;
	std::cin>>t;
	while (t--)
	{
		std::cin>>s>>b;
        a=s[s.length()-1]-'0';
		std::cout<<modular_pow(a,b)<<std::endl;
	}
	return 0;
}
