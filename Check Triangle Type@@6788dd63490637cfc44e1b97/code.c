#include <stdio.h>

int main() 
{
    int a,b,c;
    scanf("%d %d %d"&a,&b,&c);
    if(a + b > c && c + b > a && a + c > b)
    {

        if(a == b && a == c)
        {
            printf("Equilateral");
        }
        else if(a == b || b == a || c == a)
        {
            printf("Iscosceles");
        }
        else{
            printf("Scalene");
        }
    }    
}