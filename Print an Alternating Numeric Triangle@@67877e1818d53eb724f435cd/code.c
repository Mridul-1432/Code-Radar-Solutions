#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        int start = i % 2; 
        for (int j = 0; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start; 
        }
        printf("\n");
    }
    return 0;
}
