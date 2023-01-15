#include <stdio.h>
#include <math.h>

int main(){
    int num;
    int ivar;
    float fvar;
    printf("type a number: \n");
    scanf("%d",&num);
    fvar = sqrt(num);
    ivar = fvar;
    if (ivar==fvar){
        printf("%d is a perfect sqruare! \n", num);
    }
    else{
        printf("%d is not a perfect square! \n", num);
    }
    return 0;
}