#include <stdio.h>
int main()
{
    int u;
    float tb,b;
    scanf("%d",&u);
    if(u<=199)
    {
        b=u*1.20;
    }
    else if(u>=200&&u<400)
    {
        b=u*1.50;
    }
    else if(u>=400&&u<600)
    {
        b=u*1.80;
    }
    else
    {
        b=u*2.00;
    }
    if(b>400)
    {
        tb=b+b*0.15;
        printf("%.2f",tb);
    }
    else
    {
        tb=b+100;
        printf("%.2f",tb);
    }
}