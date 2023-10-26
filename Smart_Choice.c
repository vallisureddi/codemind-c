#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=500-2*a+1000-4*(a+b);
    int d=1000-4*b+500-2*(a+b);
    if(c>d)
    {
        printf("%d",c);
    }
    else if(d>c)
    {
        printf("%d",d);
    }
    else 
    printf("%d",d);
}