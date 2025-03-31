// #include <stdio.h>

// int main() {
//     int rows;
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++) {
//         char ch='A';
//         for (int j = 1; j <= rows - i; j++) {
//             printf(" ");  
//         }
//         for (int l = 1; l <= 2*i-i; l++) {
            
//             printf("%c ",ch);  
//             ch++;        
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}