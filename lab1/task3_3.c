#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1=-10;
    int num2=-86;
    int num3=-8;
    
    if (abs(num1) >= abs(num2) && abs(num1) >= abs(num3)){
        printf("%d is the largest!\n", num1);
    }
    if (abs(num2) >= abs(num1) && abs(num2) >= abs(num3)){
        printf("%d is the largest!\n", num2);
    }
    if (abs(num3) >= abs(num1) && abs(num3) >= abs(num2)){
        printf("%d is the largest!\n", num3);
    }

    return 0;
}