#include <stdio.h>
#include <stdlib.h>

int CmpDouble(const void *p1, const void *p2){
    if(*(double*)p1 < *(double*)p2) return 1;
    if(*(double*)p1 == *(double*)p2) return 0;
    if(*(double*)p1 > *(double*)p2) return -1;
}

int main(){
    double arrDouble[] = {9.3, -2.3, 1.2, -0.4, 2, 9.2, 1, 2.1, 0, -9.2};
    int arrlen = sizeof(arrDouble) / sizeof(arrDouble[0]); // Dynamicly set the size of the array
    qsort(arrDouble, arrlen, sizeof(double), CmpDouble);
    for (int i=0; i<arrlen; i++) printf("%1f ", arrDouble[i]);
    return 0;

}