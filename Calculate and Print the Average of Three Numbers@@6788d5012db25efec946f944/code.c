#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a , b ,c;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)%/3;
    printf("Average: %f\n",avg);
    return 0;
}