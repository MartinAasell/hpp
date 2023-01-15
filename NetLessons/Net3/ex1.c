#include <stdio.h>


void swap(int *xp, int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}


int main(){
    int x=1, y=2;
    swap(&x, &y);
    printf("x : %d\n", x);   // will print 2
    printf("y : %d\n", y);   // will print 1
    return 0;
}