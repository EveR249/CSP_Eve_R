// Eve Richardson, Time of day C
#include <stdio.h>
#include <time.h>

int main(void){
    //time_t seconds;
    //seconds = time(NULL);
    //printf("Seconds since start of 1970 = %d\n", seconds);

    //time_t rawtime;
    //struct tm * timeinfo;

    //time(&rawtime);
    //timeinfo = localtime(&rawtime);
    //printf("Current time and date it %s\n", asctime(timeinfo));

    //current hour
    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);
    int hour = tm_struct->tm_hour;

    if (hour <= 11){
        printf("Good morning!\n");
    }else if (hour <=3){
        printf("Good afternoon!\n");
    }else{
        printf("Good evening!\n");
    }

    return 0;
}