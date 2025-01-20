#include <stdio.h>
#include <math.h>

int main() {
    int a ,b ,c;
    scanf("%i %i %i", &a, &b, &c);
    double d = (a + b + c)/3;
    printf("Average: %.2lf", d);
}