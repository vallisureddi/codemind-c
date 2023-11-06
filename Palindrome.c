#include <stdio.h>
int main()
{
    int n,t,r,rev=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev!=t)
    printf("False");
    else
    printf("True");
}