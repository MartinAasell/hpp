/* sort.c
 * Reads integer values into an array, 
 * sorts them and writes them sorted
 * with 4 numbers per line.
*/ 
 
#include <stdio.h>

int main() {
   printf("Number of items to sort: ");
   int n;
   scanf("%d", &n);
   int a[n];
   printf("Enter the %d values: ", n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }

   for (int i = 0; i<n-1; i++) {
     int indMin = i;
     for (int j = i + 1; j < n; j++) {
       if (a[j] < a[indMin]) {
	 indMin = j;
       }
     }
     int temp = a[i];
     a[i] = a[indMin];
     a[indMin] = temp;
   }

   for (int i = 0; i < n; i++) {
      printf("%6d ", a[i]);
      if (i%4 == 3) {
         printf("\n");
      }
   }
   printf("\n");
   return 0;
}