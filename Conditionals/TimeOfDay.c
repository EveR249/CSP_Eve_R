// Eve Richardson, Time of day C
#include <stdio.h>
#include <time.h>

int main(void){
    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);
    int hour = tm_struct->tm_hour;

    if (hour <= 11){
        printf("Good morning!\n");
    }else if (hour <=15){
        printf("Good afternoon!\n");
    }else{
        printf("Good evening!\n");
    }

    return 0;
}