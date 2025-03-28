#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < rows - i; j++) {
            printf(" ");  
        }
        // for (int k = 1; k <= i; k++) {
        //     printf("*");
        // }
        for (int l = 0; l < 2*i-1; l++) {
            printf("*");  
        }
        printf("\n");
    }
    return 0;
}
