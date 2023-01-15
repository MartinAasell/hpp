#include <stdio.h>

int main(){
    printf("For-Loop: \n");
    for(int i=100; i>=0; i--){
        printf("%d \n", i);

    }
    printf("While-Loop: \n");
    
    int i=100;
    while(i > 0){
        printf("%d \n", i);
        i=i-1;
    }

    i=100;
    printf("Do-While-Loop: \n");
    do
    {
        printf("%d\n", i);
        i=i-1;
    } while (i>0);
    
    return 0;
}