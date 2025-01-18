#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char wrd[100];
    scanf("%s",wrd);
    printf("You entered: %s",wrd);
    return 0;
}