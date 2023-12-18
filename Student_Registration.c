#include <stdio.h>
int main()
{
    int i,n,m,k;
    scanf("%d",&i);
    for(;i>0;i--)
    {
        scanf("%d%d%d",&n,&m,&k);
        if(n<=m-k)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}