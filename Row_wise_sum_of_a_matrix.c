#include <stdio.h>
int main() 
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int ar[a][b];
    for(i=0;i<a;i++)
    {
        int sum=0;
        for(int j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
            sum+=ar[i][j];
        }
        printf("%d ",sum);
    }
}