#include <stdio.h>
int main() {
    float radius;
    float area;
    scanf("%f",&radius);
    area=(float)(3.14*radius*radius);
    printf("Area:%.2f",area);
    return 0;
}