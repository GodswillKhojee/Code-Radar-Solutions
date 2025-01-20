#include <stdio.h>
#include <math.h>

int main() {
    int a ,b ,c;
    scanf("%i %i %i", &a, &b, &c);
    float d = (a + b + c)/3.0;
    printf("Average: %.2f\n", d);
}