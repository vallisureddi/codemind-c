#include <stdio.h>
int main()
{
    char s1[50];
    scanf("%[^
]s",s1);
    int c=0;
    for(int i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
}