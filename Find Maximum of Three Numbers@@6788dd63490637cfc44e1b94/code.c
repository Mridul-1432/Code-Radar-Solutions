#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        print("%d",a);
    }
    else if(b>a && b>c){
        printf("%d",b);
    }
    else if(c>a && c>b){
        printf("%d",c);
    }
        return 0;
}