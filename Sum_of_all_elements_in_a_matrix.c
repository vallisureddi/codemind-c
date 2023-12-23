#include <stdio.h>
int main() 
{
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    int ar[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
            sum+=ar[i][j];
        }
    }
    printf("%d",sum);
}