#include <iostream>

/*
Problem:Life, the Universe, and Everything
Programmer:Iles Illes Tamas
Date:2019/01/30
*/

int main()
{
    int input;
    bool got42=true;
    while (scanf("%d",&input)>0)
    {
        if (input==42) 
        { 
            got42=false;
        }
        else if(got42)
        {
            printf("%d\n",input);
        }
    }
    return 0;
}

