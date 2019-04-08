#include <iostream>
#include <cmath>

/*
Problem:Pizza
Programmer:Iles Illes Tamas
Date:2019.03.31
 */

int main()
{
    int t;
    int quarter=0,half=0,third=0;
    char a,b,c;
    std::cin>>t;
    while (t--)
    {
        std::cin>>a>>b>>c;
        if (a=='3')third++;
        else if (c=='2')half++;
        else quarter++;
    }
    int sum=1;
    sum+=third;
    quarter-=third;
    if (half%2==0)
    {
        sum+=half/2;
    }
    else
    {
        sum+=half/2+1;
        quarter-=2;
    }
    if (quarter>0)
    {
        sum+=std::ceil(quarter/4.0);
    }
    std::cout<<sum<<std::endl;
}
