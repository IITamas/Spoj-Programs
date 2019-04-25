#include <bits/stdc++.h>
using namespace std;

/*
Problem:Wonowon
Programmer:Iles Illes Tamas
Date:2019.04.25
 */

bool mod(string num, int a) 
{ 
    int res = 0; 
    int lm=num.length()%4;
    res=atoi(num.substr(0,lm).c_str())%a;
    for (int i=lm;i<num.length();i+=4)
    {
        res=(res*10000+atoi(num.substr(i,4).c_str()))%a;
    }
    return res==0; 
}

int won(int n,string s)
{
    if (!mod(s.substr(0,n-2),n))
    {
        return 0;
    }
    int i=5;
    while(i<n-2&&!(mod(s.substr(0,i),n)))
    {
        i+=2;
    }
    if (i==n-2)
    {
        cout<<n<<",";
    }
    return 0;
}

int main()
{
    bool isPrime[10100];
    int primes[1240];
    isPrime[1]=false;
    for (int i=2;i<10100;i++)
    {
        isPrime[i]=true;
    }
    for (int i=2;i<10100;i++)
    {
        if (isPrime[i])
        {
            for (int j=i*2;j<10100;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    int j=0;
    for (int i=3;i<10100;i+=2)
    {
            if (i!=5&&isPrime[i])
        {
            primes[j]=i;
            j++;
        }
    }
    int k;
    cin>>k;
    string wonow="10101";
    while(wonow.length()<k)
    {
        wonow+="01";
    }
    int i,sum=0;
    i=0;
    while (primes[i]<=k)
    {
        sum+=won(primes[i],wonow);
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
