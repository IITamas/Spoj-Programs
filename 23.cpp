#include <bits/stdc++.h>
using namespace std;

/*
Problem:Pyramids
Programmer:Iles Illes Tamas
Date:2019.04.26
 */

int main()
{
    int t;
    double U,V,W,u,v,w,a,b,c,d,X,x,Y,y,Z,z,volume;
    cin>>t;
    while(t--)
    {
        cin>>U>>V>>w>>W>>v>>u;
        X=(w-U+v)*(U+v+w);
        x=(U-v+w)*(v-w+U);
        Y=(u-V+w)*(V+w+u);
        y=(V-w+u)*(w-u+V);
        Z=(v-W+u)*(W+u+v);
        z=(W-u+v)*(u-v+W);
        a=sqrt(x*Y*Z);
        b=sqrt(y*Z*X);
        c=sqrt(z*X*Y);
        d=sqrt(x*y*z);
        volume=sqrt((b+c+d-a)*(a+c+d-b)*(a+b+d-c)*(a+b+c-d))/(192*u*v*w);
        printf("%.4f\n",volume);
    }
    return 0;
}
