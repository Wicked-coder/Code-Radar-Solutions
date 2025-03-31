#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        int inc=1;
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");  
        }
        for (int l = 1; l <= 2*i; l++) {
            
            printf("%d ",inc);  
            inc ++;        
        }
        printf("\n");
    }
    return 0;
}
