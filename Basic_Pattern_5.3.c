#include <stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        for(k=i;k<a;k++)
        {
            printf("*");
        }
        printf("
");
    }
}