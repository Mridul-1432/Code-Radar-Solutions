#include <stdio.h>
int main() {
    float a,b,s,p,y,x;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
            s=a+b;
            printf("%f",s);
            break;
        case '-':
            p=a-b;
            printf("%f",p);
            break;
        case '*':
            x=a*b;
            printf("%f",x);
            break;
        case '/':
            y=a/b;
            if(b!=0){
                printf("%f",y);}
            else{
                printf("error");}
            break;
        default:
            printf("error");
            break;
        }
    return 0;
}