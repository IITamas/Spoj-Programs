#include <iostream>
using namespace std;

/*
Problem:Naja Shatranj
Programmer:Iles Illes Tamas
Date:2019.04.08
 */

int main() {
	
	long long int a,t;
	cin>>t;
	while (t--)
	{
		cin>>a;
		cout<<(a%2==0?"1":"0")<<endl;
	}
	return 0;
}
