#include <bits/stdc++.h>
using namespace std;

/*
Problem: Emoticon
Programmer: Iles Illes Tamas
Date: 2019.07.02
 */

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        vector<int>ke;
        int kek=0;
        for(char c:s)
        {
            if(c=='K')
            {
                kek+=accumulate(ke.begin(),ke.end(),0);
                ke.push_back(0);
            }
            else if(c=='E')
            {
                for_each(ke.begin(),ke.end(),[](int& i){i++;});
            }
        }
        cout<<kek<<endl;
    }
    return 0;
}
