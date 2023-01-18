#include <stdio.h>

int main(){
    int w;
    int h;
    // printf("Size of the matrix (width x height) \n");
    // printf("width: \n");
    // scanf("%d", &w);
    // printf("height: \n");
    // scanf("%d", &h);
    w=5;
    h=7;

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if (i==0||i==h-1||j==0||j==w-1){
                printf("*");
            }
            else{
                printf(".");
            }   
        }
        printf("\n");
    }
    
    return 0;
}