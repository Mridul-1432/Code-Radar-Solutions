#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    float b;
    scanf("%d",&a);
    scanf("%f",&b);
    printf("Product: %.2f", a*b);
    return 0;
}