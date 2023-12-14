#include <stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=n*2;i>=2;i--)
    {
        a=i%2;
        if(a==0)
        {
            printf("%d ",i);
        }
    }
}