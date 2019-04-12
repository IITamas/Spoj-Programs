#include <bits/stdc++.h>
using namespace std;

/*
Problem:Transform the Expression
Programmer:Iles Illes Tamas
Date:2019.04.10
 */

bool isoperator(char c)
{
    if (c=='+'||c=='*'||c=='-'||c=='/'||c=='^')
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    map<char,int> m;
    m['+']=1;
    m['-']=2;
    m['*']=3;
    m['/']=4;
    m['^']=5;
    char c,k,s;
    cin>>t;
    getchar();
    while(t--)
    {
        stack<char> op;
        queue<char> numbers; 
        while(c=getchar())
        { 
            if (c=='\n')break;
            else if (isalpha(c))
            {
                cout<<c;
            }
            else if (c=='(')
	        {
		        op.push(c);
	        }
            else if (isoperator(c))
	        {   
		        while (!op.empty()&&op.top()!='('&&*m.find(op.top())>=*m.find(c))
                {
                    cout<<op.top();
                    op.pop();
                }
                op.push(c);
	        }
            else if (c==')')
            {
                while(op.top()!='(')
                {
                    cout<<op.top();
                    op.pop();
                }
                op.pop();
            }
        }
        while (!op.empty())
        {
            if(op.top()!='(')
            {
                cout<<op.top();
            }
            op.pop();
        }
        
        cout<<endl;
    }
    return 0;
}
