#include <stdio.h>
int main()
{
    int i,n,r,rev=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(t==rev)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}