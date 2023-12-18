#include <stdio.h>
int main()
{
    int n,m,i,min,g=1;
    scanf("%d%d",&n,&m);
    if(n<m)
    min=n;
    else
    min=m;
    for(i=2;i<=min;i++)
    {
        if(n%i==0 && m%i==0)
        {
            g=i;
        }
    }
    printf("%d",g);
}