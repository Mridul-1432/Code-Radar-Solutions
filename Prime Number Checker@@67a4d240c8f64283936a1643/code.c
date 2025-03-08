#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    while(a--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}
int isPrime(int num){
   if(a%1==0 && a%a==0 && a%4!=0 && a%9!=0 && a%5!=0 && a%14 != 0)
   return 1;
   else
   return 0;
}