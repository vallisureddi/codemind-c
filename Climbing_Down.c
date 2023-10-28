#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,x,y;
    scanf("%f %f %f %f",&a,&b,&x,&y);
    float  c= (a/x);
    float  d= (b/y);
    if(c<d)
    {
        printf("Walter");
    }
    else if(d<c)
    {
        printf("Jesse");
    }
    else
    {
        printf("Both");
    }
}