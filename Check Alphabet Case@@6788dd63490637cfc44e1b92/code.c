#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char alp;
    scanf("%c",&alp);
    if(alp>="a" && alp<="z"){
        printf("Lowercase");
    }
    else if(alp>="A" && alp<="Z"){
        printf("Uppercase");

    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}