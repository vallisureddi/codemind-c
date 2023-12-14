#include <stdio.h>
int main()
{
    int x,a,sum=0,num;
    scanf("%d",&x);
    a=x*x;
    while(a!=0)
    {
        num=a%10;
        sum+=num;
        a/=10;
    }
    if(sum==x)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}