#include <iostream>

/*
Problem:Will it ever stop
Programmer:Iles Illes Tamas
Date:2019.03.30
 */

int main()
{
    long long int k;
    std::cin>>k;
    if ((k & (k - 1)) == 0)
    {
        std::cout<<"TAK\n";
    }
    else
    {
        std::cout<<"NIE\n";
    }
    return 0;
}
