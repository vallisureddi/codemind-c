#include <stdio.h>
int main()
{
    int i,n,c=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1&&i%2==0)
        c=0;
    }
        if(c==1)
        printf("True");
        else
        printf("False");
}