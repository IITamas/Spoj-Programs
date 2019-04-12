#include <bits/stdc++.h> 
using namespace std;

/*
Problem:Prime Interval
Programmer:Iles Illes Tamas
Date:2019.04.08
 */

void simpleSieve(int limit, vector<int> &prime,int a) 
{ 
    bool mark[limit+1]; 
    memset(mark, true, sizeof(mark)); 
    for (int p=2; p*p<limit; p++) 
    { 
        if (mark[p] == true) 
        { 
            for (int i=p*2; i<limit; i+=p) 
                mark[i] = false; 
        } 
    } 
    for (int p=2; p<limit; p++) 
    { 
        if (mark[p] == true ) 
        { 
            prime.push_back(p);
            if (p>=a)
            { 
                cout << p << "\n"; 
            }
        } 
    } 
} 
  
void segmentedSieve(int a,int b) 
{ 
    int n=b-a;
    int limit = floor(sqrt(b))+1; 
    vector<int> prime;  
    simpleSieve(limit, prime,a);  
    int low = a; 
    int high = a+limit; 
    while (low < b) 
    { 
        if (high >= b)  
           high = b; 
        bool mark[limit+1]; 
        memset(mark, true, sizeof(mark)); 
        for (int i = 0; i < prime.size(); i++) 
        { 
            int loLim = floor(low/prime[i]) * prime[i]; 
            if (loLim < low) 
                loLim += prime[i]; 
            for (int j=loLim; j<high; j+=prime[i]) 
                mark[j-low] = false; 
        } 
        for (int i = low; i<high; i++) 
            if (mark[i-low] == true && i>=a) 
            {
                cout << i << "\n"; 
            }
        low = low + limit; 
        high = high + limit; 
    } 
} 
  
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        segmentedSieve(a,b+1); 
    }
    return 0; 
} 

