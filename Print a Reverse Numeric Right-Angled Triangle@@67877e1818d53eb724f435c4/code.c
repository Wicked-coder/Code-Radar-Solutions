#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i =N;i>=1;i--){
        for(int j=1;j<=i;j++){
            // for(int k=1;k<=j;k++){
            //     printf("%d ",k);
            // }
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}