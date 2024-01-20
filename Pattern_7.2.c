#include <stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(k=i;k<a;k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}