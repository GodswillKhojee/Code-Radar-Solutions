#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b,c;
    scanf("%d %d",&a, &b);
    c = a - b;
    if(c > 0)
    {
        printf("Profit");
    }    
    else if(c == 0)
    {
        printf("No Profit No Loss");
    }
    else
    {
        printf("Loss");
    }
}