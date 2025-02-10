#include <stdio.h>

int main(){
    double f;
    scanf("%lf", &f);
    print("You entered: %.2f\n", f);
    return 0;
}

// int main() {
//     double num;
//     scanf("&f", &num)
//     // printf("Double value: %f\n", num);       // Default precision (usually 6 decimal places)
//     printf("Formatted: %.2f\n", num);        // Rounded to 2 decimal places
//     return 0;
// }