#include <iostream>
#include <cmath>

/*
Problem:Girls and Boys
Programmer:Iles Illes Tamas
Date:2019.03.31
 */

int main()
{
    int g,b;
    while ((std::cin>>g>>b)&&(b!=-1)&&(g!=-1))
    {
        if (g>b)
        {
            b=b+g;
            g=b-g;
            b=b-g;
        }
        std::cout<<std::ceil((b)/(g+1.0))<<std::endl;
    }
    return 0;
}
