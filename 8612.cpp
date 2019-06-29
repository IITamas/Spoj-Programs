#include <bits/stdc++.h>
using namespace std;

/*
Problem:Penney Game
Programmer:Iles Illes Tamas
Date:2019.05.31
 */

int main()
{
    string s[]={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
    int t,c;
    string b;
    cin>>t;
    while (t--)
    {
        int a[8]={0,0,0,0,0,0,0,0};
        cin>>c>>b;
        for (int i=0;i<38;i++)
        {
            string temp=b.substr(i,3);
            for(int j=0;j<8;j++)
            {
                if (temp==s[j])
                {
                    a[j]++;
                    break;
                }
            }
        }
        cout<<c<<" ";
        for (int i=0;i<8;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
