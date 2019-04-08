#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

/*
Problem:Street Parade
Programmer:Iles Illes Tamas
Date:2019.03.30
 */

int main()
{
    int k;
    while(std::cin>>k&&k!=0)
    {
        std::vector<int> lm;
        for (int i=0;i<k;i++)
        {
            int a;
            std::cin>>a;
            lm.push_back(a);
        }
        std::stack<int> s;
        for (int i=0;i<lm.size();)
        {
            if (!s.empty()&&s.top()==i+1)
            {
                lm.insert(lm.begin()+i,s.top());
                s.pop();
            }
            else if (lm.at(i)!=i+1)
            {
                s.push(lm.at(i));
                lm.erase(lm.begin()+i);
            }
            else
            {
                i++;
            }
        }
        while (!s.empty())
        {
            lm.push_back(s.top());
            s.pop();

        }
        if (std::is_sorted(lm.begin(),lm.end()))
        {
            std::cout<<"yes\n";
        }
        else
        {
            std::cout<<"no\n";
        }
    }
    return 0;
}
