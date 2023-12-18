#include <stdio.h>
#include <math.h>
int main()
{
    int a,b=0,i,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b+=i*i;
        sum+=i;
    }
    printf("%d",abs(b-(sum*sum)));
}