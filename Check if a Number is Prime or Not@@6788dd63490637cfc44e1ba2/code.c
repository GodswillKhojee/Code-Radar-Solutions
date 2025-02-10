#include <stdio.h>

int main()
{
    int n,temp;
    
    scanf("%d",&n);

    if (n == 1 || n == 0)
    {
        flag = 1;
    }
    
    for(int i = 2; i<= i/2; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}