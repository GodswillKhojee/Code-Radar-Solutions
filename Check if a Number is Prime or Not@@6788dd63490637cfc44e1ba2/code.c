#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if (n % 1 == 0 && n % n == 0)
    {
        printf("Pime");
    }
    else
    {
        printf("Not Prime");
    }
}