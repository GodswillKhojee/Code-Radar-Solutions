#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n > 0)
    {
        for(int r = n; r <= n; r++)
        {
            for(int c = 1; c<=r; c++)
            {
                printf("* ");
            }
            printf("\n");
            n -= 1;  
        }
    }
   
}