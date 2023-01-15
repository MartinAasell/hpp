#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

double *readArray(int *n){
    int size=10;
    double *a=(double*)malloc(size*sizeof(double));  // Initially a block of 10 doubles s allocated

    int i=0;
    while(scanf("%lf", &a[i])==1){  // Read and count
        i++;
        if (i==size){
            size=2*size;
            a = (double*)realloc(a, size*sizeof(double));   //If the allocated block is full, reallocate a twice as big block
        }
        a=(double*)realloc(a,i);    //Give back the unused portion of the allocated area, set the number of read values
        *n=i;                       //and return a pointer to the block.
        return a;
    }
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
    ip =&a[0];	// Points to the first element i a.
    jp = ip + 1;	// Points to the second element in a.
    *jp = 0;	// Same as a[1] = 0;
    *(ip + 3) = *(ip + 1) + 2;  	// Same as a[3] = a[1] + 2;
    ip = a;	// Same as ip = &a[0];

    /*
    C uses two types of memory: the stack and the heap.

    The memory needed by a function (i.e. local variables, arrays, constants, ...) is automatically allocated on the stack when the function is called and automatically released when the function returns to the caller. This means, among other things, that local variables can not retain their values.
    All memory we have used so far has been allocated on the stack.

    Memory on the heap is allocated by explicitly calling an allocation function and is kept allocated until explicitly released by another function.

    The most important functions, types and operators for handling dynamic memory are:
    */
    return 0;
}