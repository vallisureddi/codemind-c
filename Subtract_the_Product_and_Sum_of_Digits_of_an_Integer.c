#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,sum=0,p=1;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        sum+=b;
        p*=b;a/=10;
    }
    printf("%d",abs(sum-p));
}