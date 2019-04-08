#include <bits/stdc++.h>
using namespace std;

/*
Problem:Happy Numbers I
Programmer:Iles Illes Tamas
Date:2019.04.01
 */

int geth(int n)
{
    int result=0;
    while(n>0)
    {
        result+=(n%10)*(n%10);
        n=n/10;
    }
    return result;
}

int main()
{
    int k,step=0;
    cin>>k;
    vector<int>n;
    n.push_back(k);
    while (1)
    {
        step++;
        k=geth(k);
        if (k==*find(n.begin(),n.end(),k))
        {
            cout<<"-1"<<endl;
            break;
        }
        else if(k==1)
        {
            cout<<step<<endl;
            break;
        }
        else
        {
            n.push_back(k);
        }
    }
    return 0;
}   
