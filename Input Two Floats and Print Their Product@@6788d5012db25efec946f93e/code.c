#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    float b;
    scanf("%d",&a);
    scanf("%f",&b);
    printf("Product: %f", a*b);
    return 0;
}