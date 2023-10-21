#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}