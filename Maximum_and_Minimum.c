#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,s,d=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m1=arr[0],m2=arr[0];
    for(i=0;i<a;i++)
    {
        s=0;
        for(j=0;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                s=s+1;
            }
        }
        if(s==arr[i])
        {
            if(m1>arr[i])
            {
                m1=arr[i];
            }
            if(m2<arr[i])
            {
                m2=arr[i];
            }
            arr[i]=0;
            d=1;
        }
    }
    if(d==1)
    {
        printf("%d %d",m1,m2);
    }
    if(d==0)
    {
        printf("-1");
    }
}