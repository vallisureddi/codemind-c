#include <stdio.h>
#include <math.h>
int main()
{
    int n,i=0,r,sum=0,on,a;
    scanf("%d",&n);
    on=n;
    a=n;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    for(i;i>0;i=i-1)
    {
        r=a%10;
        sum=sum+pow(r,i);
        a=a/10;
    }
    if(on==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}