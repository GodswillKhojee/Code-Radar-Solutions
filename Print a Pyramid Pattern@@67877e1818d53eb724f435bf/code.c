#include <stdio.h>

int main()
{
    #include <stdio.h>

    int main ()
    {
        int n = 5;
        // scanf("%d", &n);

        for(int r = 1; r <= n; r++)
        {
            for(int c = 1; c <= r; c++)
            {
                printf(" ");
            }
            printf("\n");
        }

        for(int r = 1; r <= n; r++)
        {
            for(int c = 1; c <= r; c++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

}