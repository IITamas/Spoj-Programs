#include <iostream>
/*
Problem:Adding Reversed Numbers
Programmer:Iles Illes Tamas
Date:2019/01/30
*/
int reverse(int num)
{
    int output=0;
    while (num)
    {
        output=output*10+num%10;
        num=(num-num%10)/10;
    }
    return output;
}

int main()
{ 
    int k;
    scanf("%d",&k);
    while (k--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",reverse(reverse(a)+reverse(b)));
    }
    return 0;
}

