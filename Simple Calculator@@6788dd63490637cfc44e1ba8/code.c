#include <stdio.h>
#include <math.h>

int main() {
    int a,b,n;
    char c;
    scanf("%d %d %c",&a,&b,&c);

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
        if( b == 0)
        {
            printf("error");
        }
        else
        {
            n = a / b;
            printf("%d",n);
        }
        
    }
}