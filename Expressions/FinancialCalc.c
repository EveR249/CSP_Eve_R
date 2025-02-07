// Eve Richardson, Financial Calculator C
#include <stdio.h>

float income;
float rent;
float utilities;
float grocery;
float transpo;

float savings = income/10;
float spending = income-(rent+utilities+grocery+transpo);
float rentp = rent/income;
float utilitiesp = utilities/income;
float groceryp = grocery/income;
float transpop = transpo/income;

int main(void){
    printf("Hello, welcome to my budget calculator.\n");
    printf("What is your monthly income?");
    scanf("%f", income);
    printf("What is your monthly rent?");
    scanf("%f", rent)
    return 0;
}