#include <iostream>
/*
Problem:Factorial 
Programmer:Iles Illes Tamas
Date:2019/01/30
*/

int main()
{ 
    int k;
    scanf("%d",&k);
    while (k--)
    {
        long long int a;
        scanf("%lld",&a);
        long long int counter=0;
        while (a>=5)
        {
            counter=counter+a/5;
            a=a/5;
        }
        printf("%lld\n",counter);
    }
    return 0;
}

