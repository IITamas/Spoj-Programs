#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int seventoint(string s)
{
   if ("063"==s) return 0;
   if ("010"==s) return 1;
   if ("093"==s)return 2;
   if ("079"==s)return 3;
   if ("106"==s) return 4;
   if ("103"==s) return 5;
   if ("119"==s) return 6;
   if ("011"==s) return 7;
   if ("127"==s) return 8;
   if ("107"==s) return 9;
}

string inttoseven(int i)
{
    switch (i)
    {
        case 0: return "063";
        case 1: return "010";
        case 2: return "093";
        case 3: return "079";
        case 4: return "106";
        case 5: return "103";
        case 6: return "119";
        case 7: return "011";
        case 8: return "127";
        case 9: return "107";
    }
}

string realinttoseven(int i)
{
    string result;
    while (i>0)
    {
        result=inttoseven(i%10)+result;
        i=i/10;
    }
    return result;
}
int calc(int a,int b,char c)
{
    switch (c)
    {
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
    }
}
int main()
{
    while (1)
    {
        string s;
        string A,B;
        cin>>s;
        if (s=="BYE")
        {
            break;
        }
        long long int a=0,b=0;
        char d='1';
        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='=') break;
            if (s[i]=='+'|| s[i]=='-'|| s[i]=='/'|| s[i]=='*')
            {
                d=s[i];
                continue;
            }
            else
            {
                string k;
                k.push_back(s[i]);
                k.push_back(s[i+1]);
                k.push_back(s[i+2]);               
                i=i+2;
                if (d=='1')
                {
                    A=A+k;
                    a=a*10+seventoint(k);
                }
                else
                {
                    B=B+k;
                    b=b*10+seventoint(k);
                }
            }
        }
        cout<<A<<d<<B<<"="<<realinttoseven(calc(a,b,d))<<endl;

    }
    
    return 0;
}
