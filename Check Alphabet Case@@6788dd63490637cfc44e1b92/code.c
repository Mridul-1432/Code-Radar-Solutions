#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char alp;
    scanf("%c",&alp);
    if(alp>=a && alp<=z){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}