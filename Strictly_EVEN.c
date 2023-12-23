#include <stdio.h>
int main() 
{
    int a,flag=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
        for(int i=0;i<a;i++)
        {
            if(i%2!=0&&arr[i]%2==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}