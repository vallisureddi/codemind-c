#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=(a*60)+b;
    d=1440-(c);
    printf("%d",d);
}