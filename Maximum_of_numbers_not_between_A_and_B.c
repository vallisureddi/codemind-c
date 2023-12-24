#include <stdio.h>
int main()
{
    int i,n,a,b,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int max1=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max1=arr[i];
        }
    }
    scanf("%d %d",&a,&b);
    int max=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                flag=1;
            }
        }
    }
    if(max1==max)
    printf("%d",max);
    else if(max1!=max)
    printf("-1");
}