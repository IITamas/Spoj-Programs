#include <iostream>
/*
Problem:Simple Arithmetics II
Programmer:Iles Illes Tamas
Date:2019.03.29
 */



long long int calc(long long int sum,long long int k,char c)
{
    switch(c)
    {
        case '+':return sum+k;
        case '-':return sum-k;
        case '/':return sum/k;
        case '*':return sum*k;
    }
}

int main ()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char c='+';
        long long int sum=0;
        long long int k=0;
        scanf("%lld %c",&sum,&c);
        while(c!='=')
        {
            scanf("%lld",&k);
            sum=calc(sum,k,c);
            scanf(" %c",&c);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
