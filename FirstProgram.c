#include <stdio.h>

char name[20];

int main(void){
    printf("What is your name: \n");
    fgets(name, sizeof(name), stdin);
    printf("%s, welcome to my program.\n", name);
    printf("It doesn't do anything yet.\n");
    return 0;
}