#include <iostream>

/*
Problem:Cards
Programmer:Iles Illes Tamas
Date:2019.03.31
 */

long long int sum1toN(long long int n)
{
    if (n%2==0)
    {
        return (1+n)*(n/2);
    }
    else
    {
        return (1+n)*(n/2)+(n/2+1);
    }
}

int main()
{
    int t;
    std::cin>>t;
    while (t--)
    {
        long long int n;
        std::cin>>n;
        std::cout<<(2*sum1toN(n)%1000007+sum1toN(n-1)%1000007)%1000007<<std::endl;
    }
}
