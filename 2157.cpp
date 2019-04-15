#include <bits/stdc++.h>
using namespace std;

/*
Problem:Anti-Blot System
Programmer:Iles Illes Tamas
Date:2019.04.15
 */

int main()
{
    int t,i=0;
    int a,b,c;
    cin>>t;
    string s,s1,s2,s3;
    while(t>i)
    {
        getline(cin,s);
        if (s!="")
        {
            s1=s.substr(0,s.find("+"));
            s2=s.substr(s.find("+")+2,s.find("=")-s.find("+")-2);
            s3=s.substr(s.find("=")+2);
            if (s1.find("machula")!=-1)
            {
                b=stoi(s2);
                c=stoi(s3);
                a=c-b;
            }
            else if (s2.find("machula")!=-1)
            {
                a=stoi(s1);
                c=stoi(s3);
                b=c-a;
            }
            else
            {
                a=stoi(s1);
                b=stoi(s2);
                c=a+b;
            }
            cout<<a<<" + "<<b<<" = "<<c<<endl;
            i++;
        }
    }
    return 0;
}
