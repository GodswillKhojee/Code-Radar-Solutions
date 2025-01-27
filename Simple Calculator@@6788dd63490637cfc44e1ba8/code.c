#include <stdio.h>

int main() {
    int a,b,n;
    char c;
    if(c == '+')
    {
        n = a + b;
        printf("%d",n);
    }
    else if(c == '-')
    {
        n = a - b;
        printf("%d",n);
    }
    else if(c == '*')
    {
        n = a * b;
        printf("%d",n);
    }
    else if(c == '/')
    {
        n = a / b;
        printf("%d",n);
    }
    else
    {
        printf("error");
    }
}