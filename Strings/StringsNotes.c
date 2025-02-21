// Eve Richardson, strings notes C
#include <stdio.h>
#include <string.h>

char name[20];

int main(void){
    printf("Please tell me your full name:\n");
    //scanf("%s", name);
    fgets(name, 20, stdin);
    printf("Hello %s, welcome to my program", name);
    char sentence[] = "The quick brown fox jumps over the lazy dog";
    //printf("%s\n", sentence);
    //printf("%c\n", sentence[16]);
    //printf("%lu\n", sizeof(sentence));
    //printf("%d\n", strlen(sentence));
    //sizeof will always get you one more than strlen
    char one[] = "Hello ";
    char two[] = "world!";
    char three[] = "This is my program. ";
    two[5] = '?';
    printf("%s\n", one);
    strcat(one,two);
    printf("%s\n", one);
    strcat(three,one);
    printf("%s\n", three);
    return 0;
}