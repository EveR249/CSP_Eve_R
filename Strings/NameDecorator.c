// Eve Richardson, Template
#include <stdio.h>
#include <string.h>

char smile1[] = ":) :) ";
char smile2[] = " :) :)";
char name[15];

int main(void){
    printf("What is your name? (First name only)\n");
    scanf("%s", name);
    strcat(smile1,name);
    strcat(smile1,smile2);
    printf(smile1);
    return 0;
}