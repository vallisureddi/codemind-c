#include <stdio.h>
int main()
{
    int X,Y,C;
    scanf("%d%d",&X,&Y);
    C=Y/X;
    if(Y>X)
    {
        printf("%d",Y);
    }
    else if(X>Y)
    {
        printf("%d",X);
    }
}