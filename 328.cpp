#include <bits/stdc++.h>
using namespace std;

/*
Problem:Bishops
Programmer:Iles Illes Tamas
Date:2019.04.18
 */

void bishop_num(string s)
{
    if (s[0]=='1'&&s.length()==1)
    {
        cout<<'1'<<endl;
    }
    else
    {
        int size=s.length()-1;
        int i=size;
        while (i>=0)
        {
            if (s[i]!='0')
            {
                s[i]--;
                break;
            }
            else
            {
                s[i]='9';
                i--;
            }
        }
        int k=0;
        int a=0;
        int c=0;
        i=size;
        while (i>=0)
        {
            a=(s[i]-'0')*2;
            c=(a+k)%10;
            k=(a+k)/10;
            s[i]=c+'0';
            i--;
        }
        if (k>0)
        {
            cout<<k;
        }
        cout<<s<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while (cin>>s)
    {
        bishop_num(s);
    }
	return 0;
}
