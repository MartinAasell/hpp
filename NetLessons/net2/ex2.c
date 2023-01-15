/* arrays.c
 */

#include <stdio.h>
#include <math.h>

void printArray(double a[], int n) {
  printf("[");
  for (int i = 0; i < n; i++) {
    printf("%.2lf", a[i]);
    if (i < n-1) {
      printf(", ");
    }
  }
  printf("]");
}

int readArray(double a[], size_t) {
  //Unsafe function!
  int i = 0;
  while (scanf("%lf", &a[i])==1) {
    i++;
  }
  return i;
}

int vecNorm(double a[], int n){
    float sqr=0;
    for (int i=0; i<=n; i++){
        sqr+=a[i]*a[i];
    }
    printf("SQR: %.2f \n", sqrt(sqr));
}


int main() {
  double a[5];
  printf("Enter double values. End with . : ");
  int n = readArray(a);
  vecNorm(a,n);
  printArray(a, n);
}
