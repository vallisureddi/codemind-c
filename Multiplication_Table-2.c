#include <stdio.h>
int main()
{
    int A,B,i;
    scanf("%d%d",&A,&B);
    for(i=1;i<=B;i++)
    {
        printf("%d x %d = %d
",A,i,A*i);
    }
}