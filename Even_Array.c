#include <stdio.h>
int main() 
{
    int a,i;
    scanf("%d",&a);
    int arr[a],s=0,f=0;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            f++;
        }
    }
    if(f==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}