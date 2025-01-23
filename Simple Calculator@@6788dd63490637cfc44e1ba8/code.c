#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
            s=a+b;
            printf("%f",result);
            break;
        case '-':
            p=a-b;
            printf("%f",result);
            break;
        case '*':
            x=a*b;
            printf("%f",result);
            break;
        case '/':
            y=a/b;
            if(b!=0){
                printf("%f",result);}
            else{
                printf("error");}
            break;
        default:
            printf("error");
            break;
        }
    return 0;
}