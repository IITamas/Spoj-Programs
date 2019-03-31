#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp = boost::multiprecision;
using namespace std;

/*
Problem:Julka
Programmer: Iles Illes Tamas
Date:2019.03.28
 */

int main()
{
	int k=10;
    while(k--)
    {
        mp::cpp_int all,diff,jul;
        cin>>all;
        cin>>diff;
        if (all%2==0)
        {
        	jul=all/2+diff/2;
        }
        else
        {
        	jul=all/2+diff/2+1;
        }
        cout<<jul<<'\n'<<all-jul<<'\n';
    }
    return 0;
}
