#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    scanf("%c",&a);

    if(a == 'a'|| a=='e'||a=='i'||a=='o'||a=='u' || a == 'O')
    {
        printf("Vowel");
    }
    else if(isdigit(a))
    {
        printf("Digit");
    }
    else if(isalpha(a))
    {
        printf("Consonant");
    }
    else
    {
        printf("Special Character");
    }
    return 0;

}