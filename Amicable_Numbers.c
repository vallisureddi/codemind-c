#include <stdio.h>
int main()
{
    int n,m,r,i,j,s1=0,s2=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s1=s1+i;
        }
    }
    for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
            s2=s2+j;
        }
    }
    if(n==s2&&m==s1)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}