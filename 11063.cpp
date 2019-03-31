#include <iostream>

/*
Problem:AP - Complete The Series
Programmer:Iles Illes Tamas
Date:2019.03.31
 */

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long int t3,tl3,sum;
        std::cin>>t3>>tl3>>sum;
        long long int len=(2*sum)/(t3+tl3);
        long long int n=(tl3-t3)/(len-5);
        long long int t1=t3-2*n;
        std::cout<<len<<"\n";
        for (int i=0;i<len;i++)
        {
            std::cout<<t1+n*i<<" ";
        }
        std::cout<<"\n";
    }
}
