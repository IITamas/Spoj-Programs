#include <bits/stdc++.h>
using namespace std;

/*
Problem:Edit Distance Again
Programmer:Iles Illes Tamas
Date:2019.04.11
 */

int main()
{
    string s;
    while(cin>>s)
    {
        int mina=0;
        int minb=0;
        for (int i=0;i<s.length();i++)
        {
            if ('A'<=s[i]&&s[i]<='Z')
            {
                if(i%2==0)
                {
                    mina++;
                }
                else
                {
                    minb++;
                }
            }
            else
            {
                if(i%2==0)
                {
                    minb++;
                }
                else
                {
                    mina++;
                }
            }
        }
        cout<<(mina>minb?minb:mina)<<endl;
    }
    return 0;
}
