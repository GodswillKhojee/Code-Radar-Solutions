#include <stdio.h>
#include <math.h>

int main() {
    const double pi = 3.14;
    double r;
    
    scanf("%lf", &r); 
    double a = pi * r * r;
    printf("Area: %.2lf", a);
}