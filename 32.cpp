#include <bits/stdc++.h>
using namespace std;

/*
Problem:A Needle in the Haystack
Programmer:Iles Illes Tamas
Date:2019.04.07
 */

int main()
{
    int n;
    string needle,hay;
    while (cin>>n>>needle>>hay)
    {
        int pos=0;
        int i=0;
        while (1)
        {
            pos=hay.find(needle,pos);
            if (pos!=-1)
            {
                cout<<pos<<endl;
                pos++;
                i++;
            }
            else
            {
                break;
            }
        }
        if (i==0)
        {
            cout<<endl;
        }
        
    }    
    return 0;
}

