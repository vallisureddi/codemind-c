#include <stdio.h>
int main()
{
    int n;
    int fact=1;
    scanf("%d",&n);
    while(n)
    {
        fact=fact*n;
        n--;
    }
    printf("%d",fact);
}