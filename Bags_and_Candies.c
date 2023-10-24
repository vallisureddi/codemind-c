#include <stdio.h>
#include <math.h>
int main()
{
    int N,K,M;
    scanf("%d%d%d",&N,&K,&M);
    int bags=ceil((double)N/(K*M));
    printf("%d",bags);
}