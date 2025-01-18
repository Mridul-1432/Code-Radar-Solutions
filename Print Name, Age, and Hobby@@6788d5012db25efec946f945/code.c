#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char nm[100];
    int age;
    char hobby[100];
    scanf("%s %d \n",&nm,&age);
    scanf("%s",&hobby);
    printf("Name: %s",nm);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}