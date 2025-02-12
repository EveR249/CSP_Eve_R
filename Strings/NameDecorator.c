// Eve Richardson, Name Decorator C
#include <stdio.h>
#include <string.h>

char smile1[] = ":) :) ";
char smile2[] = " :) :)";
char name[15];

int main(void){
    printf("What is your name? (First name only)\n");
    scanf("%s", name);
    strcat(name,smile2);
    strcat(smile1,name);
    printf(smile1);
    return 0;
}