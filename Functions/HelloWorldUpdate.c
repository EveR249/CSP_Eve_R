//Eve Richardson Hello world update C
#include <stdio.h>

char name;

void namesfunct(){
    printf("What is your name:\n");
    scanf("%s", name);
    printf("Hello, %s\n", name);

}

int main(void){
    namesfunct(name);
    return 0;
}