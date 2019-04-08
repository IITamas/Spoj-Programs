#include <bits/stdc++.h>

/*
Problem:Candy III
Programmer:Iles Illes Tamas
Date:2019.03.28
 */

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--)
    {
        long long int n,c;
        long long int modsum=0;
        std::cin>>n;
        for (int i=0;i<n;i++)
        {
            std::cin>>c;
            modsum=(modsum+c%n)%n;
        }
        std::cout<<(modsum==0?"YES":"NO")<<std::endl;
    }
    return 0;
}
