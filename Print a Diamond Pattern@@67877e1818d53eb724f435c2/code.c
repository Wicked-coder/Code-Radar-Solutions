#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");  
        }
        // for (int k = 1; k <= i; k++) {
        //     printf("*");
        // }
        for (int l = 1; l <= 2*i-1; l++) {
            printf("*");  
        }
        printf("\n");
    }
    for (int i = rows; i >= 1; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");  
        }
        // for (int k = 1; k <= i; k++) {
        //     printf("*");
        // }
        for (int l = 1; l <= 2*i-1; l++) {
            printf("*");  
        }
        printf("\n");
    }
    return 0;
}
