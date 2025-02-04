// Eve Richardson, Expressions Notes C
#include <stdio.h>
#include <math.h> //This is what lets us do exponents

//integers have int when we set the and they are %d when we print
//Floats have float when we set and %f when we print
//Strings (words) have char when we set and %s when we print
int mynum;
float percent;
int add = 4+6;
int sub = 4-6;
int mul = 4*6;
float div = 6/4;
int mod = 6%4;
int ex = pow(5,2);

int main(void){
    //printf("type a number: \n");
    //scanf("%d", &mynum);
    //printf("You inputed %d", mynum);
    //printf("Give me a percent as a decimal: \n");
    //scanf("%f", &percent);
    //printf("Your percent is %f\n", percent);
    printf("%d\n", add);
    printf("%d\n", sub);
    printf("%d\n", mul);
    mul = 7*4;
    printf("%d\n", mul);
    printf("%.2f\n", div);
    printf("%d\n", mod);
    printf("%d\n", ex);

    return 0;
}