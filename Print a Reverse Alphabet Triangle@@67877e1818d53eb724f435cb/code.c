#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i =N;i>=1;i--){
        char ch='A';
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}