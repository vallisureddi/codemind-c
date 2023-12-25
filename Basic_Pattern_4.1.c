#include <stdio.h>
int main()
{
    int n ,i,j,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        c=1;
        else
        c=0;
        for(j=1;j<=n;j++)
        {
            printf("%d ",c);
        }
        printf("
");
    }
}