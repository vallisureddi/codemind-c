#include <stdio.h>
int main()
{
    char st[40];
    int c=0;
    scanf("%[^
]s",st);
    for(int i=0;st[i]!=NULL;i++)
    {
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
        {
            c++;
        }
    }
    printf("%d",c);
}