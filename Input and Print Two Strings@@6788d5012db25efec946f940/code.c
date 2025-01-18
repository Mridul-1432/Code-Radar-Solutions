#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char wrd[100];
    char wrd1[100];
    scanf("%s",&wrd);
    scanf("%s",&wrd1);
    printf("You entered: %s",wrd ,"and",wrd1 );
    return 0;
}