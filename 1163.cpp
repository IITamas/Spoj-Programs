#include <bits/stdc++.h>
using namespace std;

/*
Problem:Java vs C++
Programmer:Iles Illes Tamas
Date:2019.04.20
 */

int main()
{
    string s;
    while (cin>>s)
    {
        if ((isupper(s.front()))||(s.front()=='_')||(s.back()=='_')||(s.find("__")!=-1))
        {
            cout<<"Error!\n";
            continue;
        }
        bool cplus=false;
        bool java=false;
        for (int i=1;i<s.length();i++)
        {
            if (s[i]=='_')
            {
                cplus=true;
                s.erase(i,1);
                if (isupper(s[i]))
                {
                    java=true;
                    break;
                }
                s[i]=toupper(s[i]);
            }
            else if (isupper(s[i]))
            {
                java=true;
                s[i]=tolower(s[i]);
                s.insert(i,1,'_');
            }
        }
        if (java==true && cplus==true)
        {
            cout<<"Error!\n";
        }
        else
        {
            cout<<s<<"\n";
        }
    }
    return 0;
}
