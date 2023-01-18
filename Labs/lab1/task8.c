#include <stdio.h>

int main(){
    double x1=10;
    int x2=10;
    char *x3="a";
    printf("For Double:\n Value: %f\n Adress: %p\n Size: %d\n",x1, &x1, sizeof(x1));
    printf("For Int:\n Value: %d\n Adress: %p\n Size: %d\n",x2, &x2, sizeof(x2));
    printf("For Char:\n Value: %s\n Adress: %p\n Size: %d\n",x3, &x3, sizeof(x3));
    return 0;
}