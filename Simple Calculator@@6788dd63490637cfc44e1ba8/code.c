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
}