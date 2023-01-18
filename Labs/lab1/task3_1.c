#include <stdio.h>

int main(){
    int num1=10;
    int num2=6;
    
    if(num1%2==0 && num2%2==0){
        printf("EVEN: %d \n", num1+num2);
    }
    else{
        printf("NOT EVEN: %d \n", num1*num2);
    }
    return 0;
}