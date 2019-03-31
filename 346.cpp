#include <iostream>

/*
Problem:Bytelandian gold coins
Programmer:Iles Illes Tamas
Date:2019.03.27
 */



long long int bgc(long long int n)
{
	if (n<(n/2+n/3+n/4))
	{
		long long int n1=bgc(n/2);
		long long int n2=bgc(n/3);
		long long int n3=bgc(n/4);
	return (n1+n2+n3);
	}
	else
	{
		return n;
	}
}
int main()
{
	long long int k;
	while (std::cin>>k)
	{
		std::cout<<bgc(k)<<std::endl;
	}
	return 0;
}
