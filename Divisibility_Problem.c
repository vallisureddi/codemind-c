#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,o;
    scanf("%d%d",&a,&b);
    if(a%b!=0)
    {
        printf("%d",(b-(a%b)));
    }
    else 
    {
        printf("0");
    }
}