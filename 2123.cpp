#include <iostream>

/*
Problem: Candy I
Programmer:Iles Illes Tamas
Date:2019.03.27
 */

int main()
{
	int k;
	while(1)
	{
		std::cin>>k;
		if (k==-1)
		{
			break;
		}
		int pocket[k];
		int sum=0;
		for (int i=0;i<k;i++)
		{
			std::cin>>pocket[i];
			sum+=pocket[i];
		}
		if (sum%k!=0)
		{
			std::cout<<"-1"<<std::endl;
		}
		else
		{
			int avg=sum/k;
			int solution=0;
			for (int i=0;i<k;i++)
			{
				if(pocket[i]>avg)
				{
					solution+=pocket[i]-avg;
				}
			}
			std::cout<<solution<<std::endl;
		}
	}
	return 0;
}
