#include <stdio.h>

int main() 
{
    char a;
    scanf("%c",&a);
    if (a == a.toUpper())
    {
        printf("Uppercase");
    }    
    else if(a == a.toLower())
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}