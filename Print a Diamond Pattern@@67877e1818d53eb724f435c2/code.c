#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    if(rows%2==0){
    for (int i = 1; i <= rows+1; i++) {
        
        for (int j = 1; j <= rows+1; j++) {
            if(i==1&&j==1||i==rows&&j==1||i==1&&j==rows||i==rows&&j==rows){
            printf(" ");  
            }
            else{
            printf("*");
            }
        }
        printf("\n");
     }
    }
    else{
    for (int i = 1; i <= rows+1; i++) {
        
        for (int j = 1; j <= rows+1; j++) {
            if(i==1&&j==1||i==rows&&j==1||i==1&&j==rows||i==rows&&j==rows){
            printf(" ");  
            }
            else{
            printf("*");
            }
        }
        printf("\n");
     }
    }
    return 0;
}
