#include <stdio.h>
#include <math.h>
int main()
{
    float i,a,b,c=0,sq;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        sq=sqrt(i);
        c+=sq;;
    }
    printf("%.2f",c);
}