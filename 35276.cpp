#include <bits/stdc++.h>
using namespace std;

/*
Problem:Smallest on the Stack
Programmer:Iles Illes Tamas
Date:2019.04.10
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int k;
    string str;
    int a;
    stack<int> s;
    stack<int> mins;
    cin>>k;
    while (k--)
    {
        cin>>str;
        if (str=="PUSH")
        {
            cin>>a;
            s.push(a);
            if (mins.empty()||a<mins.top())
            {
                mins.push(a);
            }
            else
            {
                mins.push(mins.top());
            }
        }
        else if (str=="POP")
        {
            if (s.empty())
            {
                cout<<"EMPTY"<<"\n\n";
            }
            else
            {
            mins.pop();
            s.pop();
            }
        }
        else if (str=="MIN")
        {
            if (mins.empty())
            {
                cout<<"EMPTY"<<"\n\n";
            }
            else
            {
                cout<<mins.top()<<"\n\n";
            }
        }
    }
    return 0;
}
