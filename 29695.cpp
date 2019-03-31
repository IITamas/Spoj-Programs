#include <iostream>
/*not complete*/

int main()
{
    long long int a[7];
    for (int i=0;i<8;i++)
    {
        std::cin>>a[i];
    }
    int p;
    std::cin>>p;
    bool willcome[8];
    bool isincw[8][8];
    for (int i=0;i<8;i++)
    {
        for (int j=0;j<8;j++)
        {
            isincw[i][j]=false;
        }
    }
    while(p--)
    {
        int a,b;
        std::cin>>a>>b;
        isincw[a-1][b-1]=true;
        isincw[b-1][a-1]=true;
    }
    long long int sum=0;
    for (int i=0;i<8;i++)
    {
        long long int cwsum=0;
        bool notincw=true;
        for (int j=0;j<8;j++)
        {
            if (isincw[i][j]==true)
            {
                notincw=false;
                cwsum+=a[j];
            }
        }
        if ((notincw)||(a[i]>cwsum))
        {
            sum=sum+a[i];
        }
    }
    std::cout<<sum<<std::endl; 
    return 0;
}
