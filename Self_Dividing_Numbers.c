#include<stdio.h>
int main()
{
    int a,b,x,last,c1,c2,i;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        x=i;
        c1=0,c2=0;
        while(x)
    {
        last=x%10;
        if(last==0)
        {
            c1==0;
        }
        else
        {
            if(i%last==0)
            {
                c1++;
            }
        }
        c2++;
        x/=10;
    }    
    if(c1==c2)
    {
        printf("%d ",i);
    }
    }
}