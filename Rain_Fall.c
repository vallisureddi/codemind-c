#include <stdio.h>
int main()
{
    float R;
    scanf("%f",&R);
    if(R<3)
    {
        printf("LIGHT");
    }
    else if(R>=3 && R<7)
    {
        printf("MODERATE");
    }
    else if(R>=7)
    {
        printf("HEAVY");
    }
    return 0;
}