#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,s=0,t;
    t=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d",s);
}