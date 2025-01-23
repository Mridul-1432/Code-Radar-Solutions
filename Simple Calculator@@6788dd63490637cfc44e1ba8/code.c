#include <stdio.h>
int main() {
    float a,b,result;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    switch(c){
        case '+':
            result=a+b;
            printf("%f",result);
            break;
        case '-':
            result=a-b;
            printf("%f",result);
            break;
        case '*':
            result=a*b;
            printf("%f",result);
            break;
        case '/':
            result=a/b;
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