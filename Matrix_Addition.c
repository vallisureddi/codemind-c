#include <stdio.h>
int main() 
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int ar[a][b];
    for(i=0;i<b;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int a1,b1;
    scanf("%d%d",&a1,&b1);
    int ar2[a1][b1];
    for(i=0;i<b;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar2[i][j]);
        }
    }
    if(a==a1&&b==b1)
    {
        for(i=0;i<a;i++)
        {
            for(j=0;j<b1;j++)
            {
                printf("%d ",ar[i][j]+ar2[i][j]);
            }
            printf("
");
        }
    }
}