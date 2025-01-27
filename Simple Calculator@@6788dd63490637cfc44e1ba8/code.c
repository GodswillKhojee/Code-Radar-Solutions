#include <stdio.h>

int main() {
    int a,b,n;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
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