#include <stdio.h>
int main()
{
    int i,j,n,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<n-1;j++)
    {
        if((arr[j-1]%2==0&&arr[j+1]%2==1)||(arr[j-1]%2==1&&arr[j+1]%2==0))
        c++;
    }
            printf("%d",c);
        
}