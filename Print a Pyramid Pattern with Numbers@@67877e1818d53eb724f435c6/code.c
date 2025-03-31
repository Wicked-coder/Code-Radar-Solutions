#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");  
        }
        for (int l = 1; l <= 2*i-1; l++) {
            printf("%d ",l);  
        }
        printf("\n");
    }
    return 0;
}
