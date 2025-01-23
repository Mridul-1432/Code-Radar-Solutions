#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %d",&a,&b,&c);
    int s;
    int p;
    int x;
    int y; 
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