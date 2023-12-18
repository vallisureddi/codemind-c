#include <stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        i=a;
    }
    else
    {
        i=b;
    }
    for(;i;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
}