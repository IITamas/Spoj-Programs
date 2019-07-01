#include <bits/stdc++.h>
using namespace std;

/*
Problem: The Next Palindrome 
Programmer: Iles Illes Tamas
Date: 2019.07.01
 */

void func(string s)
{
    string s1,s2,s3;
    int l=s.length();
    s1=s.substr(0,l/2);
    s2=s.substr(l-l/2,l/2);
    s3=s1;
    reverse(s3.begin(),s3.end());
    if (lexicographical_compare(s3.begin(),s3.end(),s2.begin(),s2.end())||s2==s3)
    {
        if (l%2==1)
            s1+=s[l/2];
        int i;
        for (i=s1.length()-1;i>=0;i--)
        {
            if(s1[i]!='9')
            {
                s1[i]=s1[i]+1;
                break;
            }
            else
            {
                s1[i]='0';
            }
        }
        s2=s1;
        if (i==-1&&s1[0]=='0')
        {
            s1="1"+s1;
            if(l==1)
            s1.pop_back();
            s2=s1; 
            while(l!=s1.length()+s2.length()-1)
            {
                s2.pop_back();
            }     
            
        }
        else if (l%2==1||l==1&&s!="9")
            s2.pop_back(); 
        
        reverse(s2.begin(),s2.end());
        cout<<s1<<s2<<endl;
    }
    else
    {
        s2=s1;
        reverse(s2.begin(),s2.end());
        cout<<s1;
        if (l%2==1)
            cout<<s[l/2];
        cout<<s2<<endl;   
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>s;
        int i;
        for(i=0;s[i]=='0'&&s!="0";i++);
        if (s.length()>i)
        {
            s=s.substr(i);
        }
        else
        {
            s='0';
        }
        func(s);
    }
    return 0;
}
