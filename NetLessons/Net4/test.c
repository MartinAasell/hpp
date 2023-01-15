#include <stdio.h>
#include <stdlib.h>



typedef 
    struct Person{
        char *name;
        int age;
    } Person;
    
void *func1(*Person){
    return 0;
}


int main(){
    char*name;
    int*age;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    return 0;
}