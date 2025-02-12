// Eve Richardson, silly sentence C
#include <stdio.h>

char adj[20];
char place[20];
char verb[20];

int main(void){
    printf("Write an adjective: ");
    scanf("%s", adj);
    //fgets(adj, 20, stdin);
    printf("Give the name of a place: ");
    scanf("%s", place);
    //fgets(place, 20, stdin);
    printf("Write a verb: ");
    scanf("%s", verb);
    //fgets(verb, 20, stdin);
    printf("Bob was eating the %s pie when suddenly a clown come running at him from %s and it started %s!", adj, place, verb);
    return 0;
}