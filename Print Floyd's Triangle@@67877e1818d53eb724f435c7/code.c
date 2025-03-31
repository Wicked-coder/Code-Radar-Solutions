#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int n=i;
        for(int j=1;j<=i;j++){
            if(n>2){
                n++;
                 printf("%d ",n);
            }
            else{
                printf("%d ",n);
                n++;
            }
        }
        printf("\n");
    }
    return 0;
}