#include <stdio.h>

char name[] = "Eve";
int num = 14;
float pi = 3.14;

int main(void){
    printf("Hello %s, my age is %d and my favorite number is %f\n", name, num, pi);
    printf("%d\n", num);
    printf("%f\n", pi);
    return 0;
}