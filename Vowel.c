#include <stdio.h>

int main()
{
    char c;
    scanf("%d",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    printf("Vowel");
    else
    printf("Consonat");
    return 0;
}