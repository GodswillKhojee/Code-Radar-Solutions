#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        int m = n * i;
        printf("%d x %d = %d\n",n,i,m);
    }
}