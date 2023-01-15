/* cat.c
   Copy standard input to standard output. 
*/
// #include <ctype.h>
#include <stdio.h>
int main() {
   char c;
   c = getchar();
   while (c != EOF) {
       putchar(c);
       c = getchar();
   }
   return 0;
}