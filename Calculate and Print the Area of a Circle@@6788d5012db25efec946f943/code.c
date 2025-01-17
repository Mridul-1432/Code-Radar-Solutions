#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int radius;
    scanf("%d",&radius);
    printf("Area: %d",(3.14*radius*radius) );
    return 0;
}