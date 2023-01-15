#include <stdio.h>

int main(){
    int input, rem, rev=0, original;
    printf("Input: ");
    scanf("%d", &input);
    original=input;
    while(input != 0){
        rem = input % 10;
        rev = rev * 10 + rem;
        input /= 10;
    }
    if(rev == original){
        printf("%d is a palindrome!", original);
    }
    else
    {
        printf("%d is not a palindrome! ", original);
    }
    
    return 0;
}