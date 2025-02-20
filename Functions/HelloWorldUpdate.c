//Eve Richardson Hello world update C
#include <stdio.h>


void namesfunct(){
    char name;
    printf("What is your name:\n");
    scanf("%s", name);
    printf("Hello, %s\n", name);

}

int main(void){
    namesfunct();
    
    return 0;
}