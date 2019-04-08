#include <iostream>

#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int i=30000;
    long long int num=1;
    vector<long long int> k;
    k.push_back(num);
    while (i--)
    {
        num=(num+1234567890)%2147483648;
        if (!binary_search(k.begin(),k.end(),num)){}
        {
            k.push_back(num);
            sort(k.begin(),k.end());
        }
        if (i%1000==0)
        {
            cout<<i<<endl;
        }
    }
        cout<<k.size();
    return 0;
}
