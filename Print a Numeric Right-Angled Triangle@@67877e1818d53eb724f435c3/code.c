#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    for (int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            printf("%d",b);
            b++;
        }
    }
    return 0;
}