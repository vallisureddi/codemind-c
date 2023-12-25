#include <stdio.h>
int main()
{
    int i,n,a,c=0,c1=0,c2=0;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        c++;
        if(a%2==0)
        c1++;
        else
        c2++;
        n/=10;
    }
    if(c==c1)
    printf("Even");
    else if(c==c2)
    printf("Odd");
    else
    printf("Mixed");
}