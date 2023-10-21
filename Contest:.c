#include <stdio.h>
int main()
{
    int X,A,B;
    scanf("%d%d%d",&X,&A,&B);
    if(A+(B*2)>=X)
    {
        printf("Qualify");
    }
    else 
    {
        printf("Not Qualify");
    }
}