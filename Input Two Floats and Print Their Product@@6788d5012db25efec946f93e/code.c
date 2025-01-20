#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float b;
    
    scanf("%f", &a);
    scanf("%f", &b);
    
    float c = a * b;

    printf("Product: %.2f", c);
}