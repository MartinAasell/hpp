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

int readArray(double a[], int size) {
  //Unsafe function!
  int i = 0;
  while (scanf("%lf", &a[i])==1) {
    i++;
    if (i>=size/8){
        printf("%d is the maximum length of the array!", size/8);
        break;
    }
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
  size_t size = sizeof(a);
  printf("Enter double values. End with . : ");
  int n = readArray(a, size);
  vecNorm(a,n);
  printArray(a, n);
}
