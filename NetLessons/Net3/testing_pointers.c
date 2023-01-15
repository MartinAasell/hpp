#include <stdio.h>


void swap(int *xp, int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}


int main(){
    // int x=1, y=2;
    // swap(&x, &y);
    // printf("x : %d\n", x);   // will print 2
    // printf("y : %d\n", y);   // will print 1
    int x=1, y=2;
    int a[] = {4, 3, 2, 1};
    int *pi, *pj;
    pi = &x; // Points to x
    y = *pi; // Same as y=x
    *pi = 3; // Same as x=3
    pj = pi; // Both pi and pj are pointing to x
    *pj = *pj + 5; // Same as x=x+5
    (*pi)++; // Same as x++
    pj = NULL; // A Null reference. Same as pj=0
    *pj = 2; // ILLEGAL! It is not possible to dereference a NULL pointer
    return 0;
}