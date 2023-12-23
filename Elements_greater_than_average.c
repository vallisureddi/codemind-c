#include <stdio.h>
int main() 
{
    int a,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
        int avg=sum/a,c=0;
        for(int i=0;i<a;i++)
    {
            if(avg<=arr[i])
            {
                c++;
            }
    }
        printf("%d",c);
}