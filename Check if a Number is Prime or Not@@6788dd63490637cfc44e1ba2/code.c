#include <stdio.h>

int main()
{
    int n,temp;
    temp = n;
    scanf("%d",&n);

    if (!(n % 1 == 0 && n % temp == 0))
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}