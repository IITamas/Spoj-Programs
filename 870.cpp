#include <bits/stdc++.h>
using namespace std;

/*
Problem:Basically speaking
Programmer:Iles Illes Tamas
Date:2019.04.07
 */

int char_to_int(char c)
{
    switch (c)
    {
        case '0':return 0;
        case '1':return 1;
        case '2':return 2;
        case '3':return 3;
        case '4':return 4;
        case '5':return 5;
        case '6':return 6;
        case '7':return 7;
        case '8':return 8;
        case '9':return 9;
        case 'A':return 10;
        case 'B':return 11;
        case 'C':return 12;
        case 'D':return 13;
        case 'E':return 14;
        case 'F':return 15;
    }
    return -1;
}

char int_to_char(int n)
{
    switch (n)
    {
        case 0:return '0';
        case 1:return '1';
        case 2:return '2';
        case 3:return '3';
        case 4:return '4';
        case 5:return '5';
        case 6:return '6';
        case 7:return '7';
        case 8:return '8';
        case 9:return '9';
        case 10:return 'A';
        case 11:return 'B';
        case 12:return 'C';
        case 13:return 'D';
        case 14:return 'E';
        case 15:return 'F';
    }
    return 'e';
}
void convert(string number,int from,int to)
{
    int num=0;
    for (int i=0;i<number.length();i++)
    {
        num+=char_to_int(number[number.length()-1-i])*pow(from,i);
    }
    char a[7];
    for (int i=0;i<7;i++)
    {
        a[i]=' ';
    }
    for (int i=6;i>=0;i--)
    {
        a[i]=int_to_char(num%to);
        num=num/to;
        if(num==0)
        {
            break;
        }
    }
    if (num==0)
    {
        cout<<a<<"\n";
    }
    else
    {
        cout<<"  ERROR\n";
    }
}

int main()
{
    string s;
    int a,b;
    while(cin>>s>>a>>b)
    {
        convert(s,a,b);
    }
    return 0;
}
