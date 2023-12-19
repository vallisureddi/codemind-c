#include <stdio.h>
#include <math.h>
int main()
{
    int a,i,sum1=0,sum2=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        sum1+=arr[i];
        if(arr[i]%2==0)
        sum2+=arr[i];
    }
    printf("%d",abs(sum1-sum2));
}