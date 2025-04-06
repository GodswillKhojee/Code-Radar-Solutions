#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            int c = 65;
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
}