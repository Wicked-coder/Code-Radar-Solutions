#include <stdio.h>

int main(){
    char name[10];
    int age;
    char hobby[50];
    scanf("%s%d%s", name,&age, hobby);
    printf("Name: %s\n", name,"Age: %d\n",&age,"Hobby: %s\n", hobby);
    return 0;
}