#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using bigint   = boost::multiprecision::cpp_int;

/*
Problem:Fast Multiplication
Programmer:Iles Illes Tamas
Date:2019.04.12
 */

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	bigint x;
	bigint y;
	while (t--)
	{
		cin>>x>>y;
		cout<<x*y<<"\n";
	}
	return 0;
}
