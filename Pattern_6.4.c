#include <stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(k=i;k<a;k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%c ",a-i+1+64);
        }
        printf("
");
    }
}