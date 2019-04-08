#include <iostream>

/*
Problem:Ambiguous Permutations
Programmer:Iles Illes Tamas
Date:2019.03.31
 */

int main()
{
    int k;
    while (1)
    {
        std::cin>>k;
        if (k==0)break;
        int n[k];
        for (int i=0;i<k;i++)
        {
            std::cin>>n[i];
        }
        bool isambi=true;
        for (int i=0;i<k;i++)
        {
           if (n[n[i]-1]!=i+1)
           {
               isambi=false;
               break;
           }
        }
        isambi==false?std::cout<<"not ambiguous\n":std::cout<<"ambiguous\n";
    }
    return 0;
}
