#include <bits/stdc++.h>
using namespace std;

/*
Problem:Running Median
Programmer:Iles Illes Tamas
Date:2019.04.11
 */

int main()
{
    int c,size;
    vector<int> a;
    while (scanf("%d",&c)==1)
    {
        if (c==0)
        {
            a.clear();
            printf("\n");
        }
        else if (c==-1)
        {
            size=a.size();
            size=size%2==0?(size/2)-1:size/2;
            printf("%d\n",a[size]);
            a.erase(a.begin()+size);            
        }
        else
        {
            a.push_back(c);
        }
    }
    return 0;
}

