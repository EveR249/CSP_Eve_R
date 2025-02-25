// Eve Richardson, conditionals notes C
#include <stdio.h>
#include <string.h>

char name[] = "Eve";
int num = 8;

int main(void){
    if(strcmp(name, "Eve") == 0){
        printf("Hello self.\n");
    }else{
        printf("Hello %s, welcome to class.\n");
    }

    if(num > 5 && num < 10){
        printf("%d is a large single digit number\n", num);
    }else if (num > 10){
        printf("%d is not a single digit number!\n", num);
    }else{
        printf("%d is a small single digit number\n", num);
    }

    // && = and
    // || = or
    // != = not
if(num > 5 && num < 10){
    if(num == 7){
        printf("%d is a unlucky number!\n", num);
    }else{
        printf("%d is a good number\n", num);
    }
}
     if(num > 5 && num < 10){
        printf("%d is a large single digit number\n", num);
     }else if (num > 10){
        printf("%d is not a single digit number!\n", num);
    }else{
        printf("%d is a small single digit number\n", num);
    }
    return 0;
}