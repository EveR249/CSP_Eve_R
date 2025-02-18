// Eve Richardson, functions notes C
#include <stdio.h>

char input(char type[20]){
    char answer[50];
    printf("Please give me a %s:\n",
    type);
    scanf("%s", answer);
    return answer;
}

void add(){
    printf("%d\n",6+8);

}

void add2(int numOne, int numTwo){
    printf("%d\n", numOne+numTwo);
}

int main(void){
    printf("Hello World\n");
    add2(3,2);
    add2(4,9);
    add2(9,0);
    add();
    input("name");
    input("verb");
    input("place");
    printf("%s was %s until they somehow reached %s\n", input("name"), input("verb"), input("place"));
    return 0;
}