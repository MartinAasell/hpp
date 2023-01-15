#include <stdio.h>

int factorial(int n){
    int results=1;
    // while (n>0){
    //     results = results*n;
    //     n--;
    // }
    for (int j=1; j<=n; j++){
        results = results*j;
    }
    return results;
}

int main(){
    
    for (int i=0; i<=10; i++){
        printf("%2d %15d \n", i, factorial(i));
    }
    return 0;
}
