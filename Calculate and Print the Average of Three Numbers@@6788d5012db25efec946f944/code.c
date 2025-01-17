#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    int c;
    scanf("%d\t",&a);
    scanf("%d\t",&b);
    scanf("%d",&c);
    printf("%d",(a+b+c)/3);
        return 0;
}