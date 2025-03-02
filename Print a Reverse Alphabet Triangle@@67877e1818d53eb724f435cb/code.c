// Your code here...
#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        char ch ='A';
        for(j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
    }