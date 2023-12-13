#include <stdio.h>
int main()
{
    int i,n,r;
    scanf("%d",&n);
    r=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    i=n;
    printf("%d",r+i);
}