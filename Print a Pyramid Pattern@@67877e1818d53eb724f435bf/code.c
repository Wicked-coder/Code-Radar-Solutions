#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i;i<N;i++){
        for(int j=N;j<N-i;j++){
            printf(" ");
        }
        for(int k=0;k<N;k++){
            printf("*")
        }
        printf("\n");
    }
    return 0;
}