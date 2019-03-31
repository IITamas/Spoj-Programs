#include <iostream>
#include <vector>
#include <algorithm>

/*
Problem: Tables
Programmer:Iles Illes Tamas
Date:2019.03.28
 */

int main()
{
    long long int a,b,c;
    std::cin>>a>>b>>c;
    std::vector <int> d;
    long long int k;
    for (int i=0;i<a;i++)
    {
        std::cin>>k;
        d.push_back(k);
    }
    std::sort(d.begin(),d.end());
    std::reverse(d.begin(),d.end());
    long long int sum=0;
    long long int j=0;
    while (sum<b*c)
    {
        sum+=d.at(j);
        j++;
    }
    std::cout<<j;
}
