#include <stdio.h>

int *g(int *a) {
   return a + 1;
}

int *f() {
    int a[] = {1, 2, 3, 4, 5};
    return g(a);
    // return a+1;
}

int main() {
  printf("%d\n", *f());
}


/*
QUESTIONS:
1) Does it work? 
    Change first line form "#import" to "#include"
2) What will it print?
    It prints 2
3) Can you foresee any problems with it?

*/