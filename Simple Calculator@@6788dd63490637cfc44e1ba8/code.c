#include <stdio.h>

int main() {
    int a,b,n;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
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
}