#include <stdio.h>

int main() {
    int rows;

    // Ask user for the number of rows
    // printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");  // print spaces
        }

        // Inner loop for stars
        for (int k = 1; k <= i; k++) {
            printf("*");  // print stars
        }
        
        
         for (int l = 1; l <= (2*i-1); l++) {
            printf("*");  // print stars
        }
        
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
