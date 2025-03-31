#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int n=i;
        for(int j=0;j<=i;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}