// Eve Richardson, Family Loop C
#include <stdio.h>

int main(void){
    
 char family[][20] ={"Blaine", "Michelle", "Kimberley", "Asher", "Oliver", "Eve"};
    int famlength = sizeof(family)/sizeof(family[0]);
    int fam = 0;
    while(fam<famlength){
        printf("%s\n", family[fam]);
        fam++;
    }

    return 0;
}