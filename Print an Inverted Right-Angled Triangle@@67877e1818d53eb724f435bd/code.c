#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i;i<N;i++){
        for(int j=N;j>i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}