#include <stdio.h>
int main()
{
    int i,n,a,b,flag=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            sum+=arr[i];
            flag=1;
        }
    }
    printf("%d",sum);
}