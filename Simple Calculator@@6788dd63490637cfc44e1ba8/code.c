#include <stdio.h>
int main() {
    int a,b,result;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    switch(c){
        case '+':
            result=a+b;
            printf("%d",result);
            break;
        case '-':
            result=a-b;
            printf("%d",result);
            break;
        case '*':
            result=a*b;
            printf("%d",result);
            break;
        case '/':
            float(result)=a/b;
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