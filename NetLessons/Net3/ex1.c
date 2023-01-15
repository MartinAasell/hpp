#include <stdio.h>
#include <stdlib.h>

char *readLine(){
    char *line = NULL;
    size_t size=0;
    getline(&line, &size, stdin);
    return line;
}


int main(){
    readLine();
    return 0;
}