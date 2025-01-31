#include <stdio.h>

int main() {
    int a,b,n;
    char c;
    scanf("%d %d %c",&a,&b,&n);
    if(c == '+')
    {
        n = a + b;
    }
    else if(c == '-')
    {
        n = a - b;
    }
    else if(c == '*')
    {
        n = a * b;
    }
    else if(c == '/')
    {
        n = a / b;
    }
    else
    {
        printf("error");
    }
    printf("%d",n);
}