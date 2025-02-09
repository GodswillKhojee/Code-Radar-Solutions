#include <stdio.h>

int main()
{
    int n;
    scanf("%i",&n);
    
    if(n > 0 && n <= 100)
    {
        printf("In Range");
    }
    else
    {
        printf("Out of Range");
    }
}