#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ltr;
    scanf("%c",&ltr);
    printf("ASCII Value: %d",ltr );
    return 0;
}