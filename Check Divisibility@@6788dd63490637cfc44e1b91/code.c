#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a%55==0){
        printf("Dvisible");
    }
    else{
        printf("Not Divisible");}
    return 0;
}