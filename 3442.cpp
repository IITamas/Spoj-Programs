#include <iostream>




long long int modular_pow(long long int base,long long int exponent)
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
	long long int a,b;
	std::cin>>t;
	while (t--)
	{
		std::cin>>a>>b;
		std::cout<<modular_pow(a,b)<<std::endl;
	}
	return 0;
}
