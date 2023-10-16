#include <stdio.h>
int main()
{
    float SP,CP,P;
    scanf("%f%f",&CP,&SP);
    P=SP-CP;
    printf("%.2f",(P/CP)*100);
}