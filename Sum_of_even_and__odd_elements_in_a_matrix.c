#include <stdio.h>
int main() 
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int ar[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
        int sum1=0,sum2=0;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(ar[i][j]%2==0)
                {
                    sum1+=ar[i][j];
                }
                else
                {
                    sum2+=ar[i][j];
                }
            }
        }
        printf("%d %d",sum1,sum2);
    }