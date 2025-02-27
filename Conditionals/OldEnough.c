// Eve Richardson, Old Enough C
#include <stdio.h>

int age = 6;

int main(void){
    
 if(age < 4){
        printf("You can not go to school yet.\n");
    }else if (age >= 18){
        printf("Ypu can vote!\n");
    }else if (age >= 16){
        printf("You can drive!\n");
    }else if (age >= 15){
        printf("You can get your learners permit!\n");
    }else{
        printf("You can go to school!\n");
    }

    return 0;
}