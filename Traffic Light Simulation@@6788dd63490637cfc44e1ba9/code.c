#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%C",&a);
    switch(a){
        case "R":
        printf("Stop");
        break;
        case "G":
        printf("Go");
        break;
        case "Y":
        printf("Slow Dwon");
        break;
        default:
        printf("Invalid input");

    }
    return 0;
}