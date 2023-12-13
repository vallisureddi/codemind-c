#include <stdio.h>
int main()
{
    int n,a;
    float b,sum=0.0;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        b=1.0/a;
        sum=sum+b;
    }
    printf("%.2f",sum);
}