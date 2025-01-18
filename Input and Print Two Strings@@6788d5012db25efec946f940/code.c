#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char wrd[100];
    char wrd1[100];
    scanf("%s %s",&wrd,&wrd1);
    printf("You entered: %s and %s",wrd,wrd1 );
    return 0;
}