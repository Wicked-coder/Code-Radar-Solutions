// #include <stdio.h>
// int main(){
//     char firstname[30];
//     scanf("%s", firstname);
//     printf("YOu entered: %s\n", firstname);
//     return 0;
// }
#include <stdio.h>

int main() {
    char word[100]; // Assuming the input word will not exceed 99 characters
    scanf("%s", word);
    printf("You entered: %s\n", word);
    return 0;
}