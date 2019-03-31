#include <iostream>

/*
Problem:Number Steps
Programmer:Iles Illes Tamas
Date:2019.03.27
 */

int main()
{
	int k,x,y;
	std::cin>>k;
	while(k--)
	{
		std::cin>>x>>y;
		if ((x!=y)&&(x!=y+2))
		{
			std::cout<<"No Number"<<std::endl;
		}
		else
		{
			if (x%2==0)
			{
				std::cout<<x*2+(x==y?0:-2)<<std::endl;
			}
			else
			{
				std::cout<<x*2+(x==y?-1:-3)<<std::endl;
			}
		}
	}
	return 0;
}
