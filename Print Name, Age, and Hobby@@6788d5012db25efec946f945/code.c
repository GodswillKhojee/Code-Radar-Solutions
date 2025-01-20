#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hoppy[100];

    scanf("%s %d %s" ,&name, &age, &hoppy);
    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("Hobby: %s", hoppy);

}