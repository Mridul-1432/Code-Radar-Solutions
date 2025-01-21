#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int LSB= a & 1;
    printf("%s", welcome());
    if(LSB==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    }
    return 0;
}