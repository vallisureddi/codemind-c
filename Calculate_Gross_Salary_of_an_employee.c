#include <stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f%f%f",&bs,&hra,&da);
    float pf=(12.0/100.0)*bs;
    float gs=bs+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
}
