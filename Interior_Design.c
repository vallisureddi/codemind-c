#include <stdio.h>
int main()
{
    int X1,Y1,X2,Y2;
    scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
    if((X1+Y1)<(X2+Y2))
    {
    printf("%d",X1+Y1);
    }
    else
    {
        printf("%d",X2+Y2);
    }
}