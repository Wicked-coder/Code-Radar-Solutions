// #include <stdio.h>
// #include<math.h>
// int main(){
//     float r;
//     float pi=3.14;
//     scanf("%f", &r);
//     printf("Area: %.2f\n", (pi*pow(r,2)));
//     return 0;
// }
#include <stdio.h>

int main() {
    float radius;
    scanf("%f", &radius);
    printf("Area: %.2f\n", 3.14 * radius * radius);
    return 0;
}