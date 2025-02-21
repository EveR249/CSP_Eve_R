//Eve Richardson Hello world update C
#include <stdio.h>

 char name[20];

void namesfunct(char*user){
    printf("Hello, %s\n", user);
    

}

int main(void){
    printf("What is your name:\n");
    scanf("%s", name);
    //fgets(name, 20, stdin);
    namesfunct(name);
    namesfunct("Polly");
    namesfunct("Chris");
    namesfunct("Alex");
    namesfunct("Lola");
    
    return 0;
}