#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CmpString(const void *p1, const void *p2){
    const char* p1char = *(const char**)p1;
    const char* p2char = *(const char**)p2;
    printf("Comparing %s and %s\n", p1char, p2char);
    return strcmp(p1char, p2char);
}

int main(){
    char *arrSrt[] = {"daa", "cbab", "bbbb", "bababa", "ccccc", "aaaa"};
    int arrSrtlen = sizeof(arrSrt) / sizeof(char *);
    qsort(arrSrt, arrSrtlen, sizeof(char *), CmpString);
    printf("Final sort: \n");
    for(int i=0; i<arrSrtlen; i++) printf("%s ", arrSrt[i]);
    return 0;
}