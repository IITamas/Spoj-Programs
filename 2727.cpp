#include <iostream>
#include <vector>
#include <algorithm>

/*
Problem:Army Strength
Programmer:Iles Illes Tamas
Date:2019.03.30
 */

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int ng,nm;
        std::vector<int> g,m;
        std::cin>>ng>>nm;
        for (int i=0;i<ng;i++)
        {
            int k;
            std::cin>>k;
            g.push_back(k);
        }
        for (int i=0;i<nm;i++)
        {
            int k;
            std::cin>>k;
            m.push_back(k);
        }
        int gmax=*std::max_element(g.begin(),g.end());
        int mmax=*std::max_element(m.begin(),m.end());
        gmax>=mmax?std::cout<<"Godzilla\n":std::cout<<"MechaGodzilla\n";
    }
    return 0;
}
