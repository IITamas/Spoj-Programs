#include <bits/stdc++.h>
using namespace std;
#define maxnum 1<<10

/*
Problem:Kompici
Programmer:Iles Illes Tamas
Date:2019.04.22
 */

int main()
{
    int t;
    scanf("%d",&t);
    long long int sum=0;
    int mask;
    int bmask[maxnum]={0};
    char a[20];
    for (int i=0;i<t;i++)
    {
        scanf("%s",&a);
	mask=0;
        for (int j=0;a[j]!='\0';j++)
        {
            mask|=1<<(a[j]-'0');
        }
        sum+=bmask[mask];
        bmask[mask]++;
    }
    for (int i=0;i<maxnum;i++)
    {
        for (int j=i+1;j<maxnum;j++)
        {
            if (i&j)
            {
                sum+=bmask[i]*bmask[j];
            }
        }
    }
    printf("%lld\n",sum);
    return 0;
}
