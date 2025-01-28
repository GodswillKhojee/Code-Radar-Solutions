#include <stdio.h>

int main() 
{
    char a;
    scanf("%c",&a);
    if (a == toUpper(a))
    {
        printf("Uppercase");
    }    
    else if(a == toLower(a))
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}