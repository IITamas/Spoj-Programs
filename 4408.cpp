#include <iostream>
/*
Problem:Build a Fence
Programmer:Iles Illes Tamas
Date:2019.03.31
 */
int main()
{
    float pi=3.14159;
    int k;
    while (std::cin>>k&&k!=0)
    {
        printf("%.2f\n",k*k/(2*pi));
    }
    return 0;
}
