#include <stdio.h>
int main()
{
    int B,A;
    scanf("%d%d",&A,&B);
    while (B>=A)
    {
        printf("%d ",B);
        B--;
    }
}