#include <stdio.h>

int main() {
    double num;
    scanf("%lf", &num);       // Read double input with %lf
    printf("You entered: %.f\n", num); // Print with %f (default 6 decimal places)
    return 0;
}

// int main() {
//     double num;
//     scanf("&f", &num)
//     // printf("Double value: %f\n", num);       
//     printf("Formatted: %.2f\n", num);        
//     return 0;
// }