#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Problem:Stamps
Programmer:Iles Illes Tamas
Date:2019.03.30
 */

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        long long int sum=0,alls,fs;
        int f;
        vector<int> s;
        cin>>alls>>f;
        for (int j=0;j<f;j++)
        {
            cin>>fs;
            s.push_back(fs);
        }
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        int j;
        for (j=0;j<f;j++)
        {
            sum+=s.at(j);
            if (sum>alls) break;
        }
        cout<<"Scenario #"<<i+1<<":\n";
        sum>alls?cout<<j+1<<"\n\n":cout<<"impossible\n\n";
    }
    return 0;
}
