#include <iostream>

/*
Problem: Three Fat Ladies
Programmer:Iles Illes Tamas
Date:2019.03.28
 */

int main()
{
    long long int k=0;
    int i=0;
    std::cin>>i;
    while (i--)
    {
        std::cin>>k;
        long long int sum;
        sum=(k-1)*250+192;
        std::cout<<sum<<std::endl;
    }
    return 0;
}
