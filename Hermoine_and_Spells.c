#include <stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d%d%d",&x,&y,&z);
    a=x+y+z;
    if(x<y && x<z)
    printf("%d",a-x);
    else if(y<z && y<x)
    printf("%d",a-y);
    else
    printf("%d",a-z);
}