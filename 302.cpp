#include <bits/stdc++.h>
using namespace std;

/*
Problem:Count on Cantor
Programmer:Iles Illes Tamas
Date:2019.05.31
 */

int main()
{
    int a=1,b[4475],num=1,t,k
        ;
    while (a<4475)
    {
        b[a]=num;
        a++;
        num+=a;
    }
    cin>>t;
    while(t--)
    {
        cin>>num;
	    auto c=lower_bound(b,b+4474,num);
        k=distance(b,c);
	    if(k%2==0)
	    {    
            cout<<"TERM "<<num<<" IS "<<k+num-*c<<"/"<<1+*c-num<<"\n";
	    }
	    else
	    {
            cout<<"TERM "<<num<<" IS "<<1+*c-num<<"/"<<k+num-*c<<"\n";
	    }
    }
    return 0;
}
