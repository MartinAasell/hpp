#include <stdio.h>

int main(){
    char c='a';
    printf("c as a character: %c \n", c);
    printf("c as an integer : %d \n", c);

    int i = c+1;
    printf("i as a character: %c \n", c);
    printf("i as an integer : %d \n", c);

    int v = 'x' + 'A' - 'a';
    printf("v as a character: %c \n", v);
    printf("v as an integer : %d \n", v);

    return 0;
}