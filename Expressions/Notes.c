// Eve Richardson, Expressions Notes C
#include <stdio.h>
//integers have int when we set the and they are %d when we print
//Floats have float when we set and %f when we print
//Strings (words) have char when we set and %s when we print
int mynum;
float percent;

int main(void){
    printf("type a number: \n");
    scanf("%d", &mynum);
    printf("You inputed %d", mynum);
    printf("Give me a persent as a decimal: \n");
    scanf("%f", &percent);
    printf("Your percent is %f\n", percent);
    return 0;
}