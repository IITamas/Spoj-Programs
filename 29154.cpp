#include <iostream>
#include <string>

/*
Problem: Sum of Digits;
Programmer:Iles Illes Tamas
Date:2019.03.28
 */

int main()
{
    int k;
    std::string s;
    int sum;
    std::cin>>k;
    while(k--)
    {
        sum=0;
        std::cin>>s;
        for (int i=0;i<s.length();i++)
        {
            sum+=s[i]-'0';
        }
        std::cout<<sum<<std::endl;
    }
    return 0;
}
