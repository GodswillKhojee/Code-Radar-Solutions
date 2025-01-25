#include <stdio.h>
#include <ctype.h>

int main() {
    char a,b;
    scanf("%c",&a);

    b = a.toUpper();
    if(b == 'R')
    {
        printf("Stop");
    }
    else if(b == 'G')
    {
        printf("Go");
    }
    else if (b == 'Y')
    {
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
}