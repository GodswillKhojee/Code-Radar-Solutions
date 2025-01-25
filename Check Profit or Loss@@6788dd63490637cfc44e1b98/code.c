#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b,c;
    scanf("%d %d",&a, &b);
    c = a - b;
    if(c < 0)
    {
        printf("Loss");
    }    
    else
    {
        printf("Profit");
    }
}