#include <stdio.h>
int main() {
    int a,b,s,p,y,x;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    switch(c){
        case '+':
            s=a+b;
            printf("%d",s);
            break;
        case '-':
            p=a-b;
            printf("%d",p);
            break;
        case '*':
            x=a*b;
            printf("%d",x);
            break;
        case '/':
            y=a/b;
            if(b!=0){
                printf("%d",y);}
            else{
                printf("error");}
            break;
        default:
            printf("error");
            break;
        }
    return 0;
}