#include <stdio.h>
int main()
{
    int a,x=0;
    scanf("%d",&a);
    while(a!=1)
    {
        if(a%5==0)
        {
            a/=5;
        }
        else if(a%3==0)
        {
            a/=3;
        }
        else if(a%2==0)
        {
            a/=2;
        }
        else
        {
            printf("Not Ugly Number");
            x=1;
            break;
        }
    }
    if(x==0)
    {
        printf("Ugly Number");
    }
}