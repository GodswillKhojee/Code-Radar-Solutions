#include <stdio.h>

int main() {
    char a,b;
    scanf("%d",&a);

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