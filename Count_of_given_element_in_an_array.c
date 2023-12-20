#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    scanf("%d",&arr[i]);
    int se,count=0;
    scanf("%d",&se);
    for(i=0;i<a;i++)
    {
        if(arr[i]==se)
        count++;
    }
    printf("%d",count);
}