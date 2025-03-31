#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        char ch='A';
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");  
        }
        for (int l = 1; l <= 2*i-i; l++) {
            ch++;
            printf("%d ",ch);          
        }
        printf("\n");
    }
    return 0;
}
