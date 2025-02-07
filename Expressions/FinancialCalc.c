// Eve Richardson, Financial Calculator C
#include <stdio.h>

float income;
float rent;
float utilities;
float grocery;
float transpo;

float savings = income/10;
float spending = income-(rent+utilities+grocery+transpo+savings)*100;
float rentp = rent/income*100;
float utilitiesp = utilities/income*100;
float groceryp = grocery/income*100;
float transpop = transpo/income*100;

int main(void){
    printf("Hello, welcome to my budget calculator.\n");
    printf("What is your monthly income?");
    scanf("%f", income);
    printf("What is your monthly rent?");
    scanf("%f", rent);
    printf("What is your monthly utilities spending?");
    scanf("%f", utilities);
    printf("What is your monthly grocery spending?");
    scanf("%f", grocery);
    printf("What is your monthly transportation spending?");
    scanf("%f", transpo);
    printf("You spend $%f on rent and that is %f percent of your income.\n", rent, rentp);
    printf("You spend $%f on utilities and that is %f percent of your income.\n", utilities, utilitiesp);
    printf("You spend $%f on groceries and that is %f percent of your income.\n", grocery, groceryp);
    printf("You spend $%f on transportation and that is %f percent of your income.\n", transpo, transpop);
    return 0;
}