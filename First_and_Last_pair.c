#include <stdio.h>
int main()
{
    int n,i,j,k,b;
    scanf("%d",&n);
    b=n-1;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2!=0)
    {
        for(k=0;k<=(n/2)-1;k++)
        {
            for(i=k;i<=k;i++)
            {
                printf("%d ",a[i]);
            }
            for(j=b;j>=b;j--)
            {
                printf("%d ",a[j]);
            }
            b--;
        }
        printf("%d %d",a[(n/2)],0);
    }
    else if(n%2==0)
    {
        for(k=0;k<=(n/2)-1;k++)
        {
            for(i=k;i<=k;i++)
            {
                printf("%d ",a[i]);
            }
            for(j=b;j>=b;j--)
            {
                printf("%d ",a[j]);
            }
            b--;
        }
    }
}