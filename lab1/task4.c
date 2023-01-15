#include <stdio.h>

int main(){
    float num1, num2;
    char OP;
    printf("Enter expression:\n");
    scanf("%f %c %f", &num1, &OP, &num2);
    printf("INPUT: %.2f%c%.2f \n", num1, OP, num2);
    switch (OP)
    {
    case '+':
        printf("OUTPUT: %d", num1+num2);
        break;
    case '-':
        printf("OUTPUT: %d", num1-num2);
        break; 
    
    case '*':
        printf("OUTPUT: %d", num1*num2);
        break;
    case '/':
        printf("OUTPUT: %f", num1/num2);
        break;
    }
    return 0;
}