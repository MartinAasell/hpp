#include <stdio.h>

int main(){
    int div, divide;

    printf("Enter divident: ");
    scanf("%d", &div);
    printf("Enter divider: ");
    scanf("%d",&divide);

    printf("Quotient = %d\n", div/divide);
    printf("Remeinder = %d", div%divide);
    return 0;
}