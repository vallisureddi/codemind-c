#include <stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        c+=i;
    }
    if(c==n)
    printf("PERFECT");
    else if(c<n)
    printf("DEFICIENT");
    else
    printf("ABUNDANT");
}