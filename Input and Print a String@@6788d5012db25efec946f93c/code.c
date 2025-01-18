#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char wrd;
    scanf("%c",&wrd);
    printf("You entered: %c",wrd);
    return 0;
}