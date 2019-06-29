#include <bits/stdc++.h>
using namespace std;

/*
Problem: Numeral System
Programmer:Iles Illes Tamas
Date:2019.06.29
 */

int mcxi_to_dec(string a)
{
    int res=0;
    int rem=1;
    for(char c:a)
    {
        switch (c)
        {
            case 'm':
            {
                res+=1000*rem;
                rem=1;
                break;
            }
            case 'c':
            {
                res+=100*rem;
                rem=1;
                break;
            }
            case 'x':
            {
                res+=10*rem;
                rem=1;
                break;
            }
            case 'i':
            {
                res+=rem;
                rem=1;
                break;
            }
            default:rem=c-'0';
        }
    }
    return res;
}

string dec_to_mcxi(int a)
{
    char c[4]={'m','c','x','i'};
    string s="";
    string b=to_string(a);
    int i=4-b.length();
    for(char d:b)
    {
        switch(d)
        {
            case '0':break;
            case '1':
            {
                s+=c[i];
                break;
            }
            default:
            {
                s+=d;
                s+=c[i];
            }
        }
        i++;
    }
    return s;
}

int main()
{
    int t;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<dec_to_mcxi(mcxi_to_dec(a)+mcxi_to_dec(b))<<endl;

    }
    return 0;
}
