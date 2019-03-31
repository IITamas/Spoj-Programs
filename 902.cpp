#include <iostream>

/*
Problem:Hangover
Programmer:Iles Illes Tamas
Date:2019.03.30
 */

int main()
{
    while(1)
    {
        float r;
        std::cin>>r;
        if (r==0.0)
        {
            break;
        }
        float sum=0;
        int num=0;
        while (sum<r)
        {
            sum+=1.0/(num+2);
            num++;
        }
        std::cout<<num<<" Card(s)\n";
    }
    return 0;
}
