#include <stdio.h>
int main() 
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ar[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(int i=0;i<b;i++)
    {
        int sum=0;
        for(int j=0;j<a;j++)
    {
        sum+=ar[j][i];
    }
    printf("%d ",sum);
    }
}