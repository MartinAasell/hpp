#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("/tmp/test1.txt", "w+");
    fprintf(fp, "this is testing for fprintf...\n halloj");
    fputs("This is testing for fputs....\n", fp);
    fclose(fp);
    return 0;
}