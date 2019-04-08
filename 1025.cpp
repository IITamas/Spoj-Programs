#include <iostream>
#include <algorithm>
#include <vector>

/*
Problem:Fashion Shows
Programmer:Iles Illes Tamas
Date:2019.03.27
 */

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		int men[n];
		int woman[n];
		for (int i=0;i<n;i++)
		{
			std::cin>>men[i];
		}
		for (int i=0;i<n;i++)
		{
			std::cin>>woman[i];
		}
		std::vector<int> menvector(men, men+n);
		std::vector<int> womanvector(woman, woman+n);
		std::sort (menvector.begin(), menvector.end());
		std::sort (womanvector.begin(), womanvector.end());
		int sum=0;
		for (int i=0;i<n;i++)
		{
			sum+=menvector.at(i)*womanvector.at(i);
		}
		std::cout<<sum<<std::endl;
	}
	return 0;
}

