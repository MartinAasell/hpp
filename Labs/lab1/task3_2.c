#include <stdio.h>

int main(){
    int num1=-10;
    int num2=-86;
    int num3=-8;
    
    if (num1 >= num2 && num1 >= num3){
        printf("%d is the largest!\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3){
        printf("%d is the largest!\n", num2);
    }
    else if (num3 >= num1 && num3 >= num2){
        printf("%d is the largest!\n", num3);
    }

    return 0;
}