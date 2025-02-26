// Eve Richardson, Financial Calculator Update C
#include <stdio.h>


float income, rent, utilities, grocery, transpo, spend, save, total;




float ask(char type[], float money){
   printf("What is your monthly %s:\n", type);
   scanf("%f", &money);
   return money;
}




void percents(char type[], int cost){
   int per = cost/income*100;
   printf("Your %s is %d%% of your income.\n", type, per);
  
}




int main(void){
  printf("This is a budget calculator.\n");
  income = ask("income", income);
  rent = ask("rent", rent);
  transpo = ask("transportation", transpo);
  utilities = ask("utilities", utilities);
  grocery = ask("groceries", grocery);


  save = income/10;
  total = rent+utilities+grocery+transpo;
  spend = income-total-save;


  printf("You make $%.2f\n", income);
  printf("You have spent $%.2f total.\n", total);
  printf("You have $%.2f left to spend.\n", spend);


  percents("rent", rent);
  percents("groceries", grocery);
  percents("utilities", utilities);
  percents("transportation", transpo);
  percents("leftover spending money", spend);
  printf("You should save 10 percent of your income and that is $%.2f\n", save);
 
   return 0;
}



