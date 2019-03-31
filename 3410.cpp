#include <iostream>

/*
Problem:Feynman
Programmer:Iles Illes Tamas
Date:2019.03.27
*/

long long int feynman(int n)
{
	long long int sum=0;
	for (int i=1;i<=n;i++)
	{
		sum+=i*i;
	}
	return sum;
}

int main()
{
	int n;
	while (1)
	{
		std::cin>>n;
		if (n==0)
		{
			break;
		}
		std::cout<<feynman(n)<<std::endl;
	}
	return 0;
}
