#include <stdio.h>

int main() {
    int a,b,n;
    char c;
    scanf("%d %d %c",&a,&b,&c);

    switch(c)
    {
        case '+':
            n = a + b;
            printf("%d",&n);
            break;
            
        case '-':
            n = a - b;
            printf("%d",&n);
            break;

        case '*':
            n = a * b;
            printf("%d",&n);
            break;

        case '/':
            if ( b == 0)
            {
                printf("error");
            }
            else
            {
                n = a / b;
                printf("%d",&n);
            }
            break;

        default:
            printf("error");
            break;
    }
}