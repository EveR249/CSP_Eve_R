// Eve Richardson, Loops notes c
#include <stdio.h>

int main(void){
    
// What is a loop? 
    // A section of code that repeats

// What are the two types of loops?
    // for loops
    int x;
    for (x=0; x<10;x++){
        printf("Hello\n");
    }

    //while loops
    int i=1;
    while(i<10){
        printf("%d\n", i);
        i++;
    }

// What is iteration
    // The act of repeating
    // Reference an iteration as a specific time through the loop

// What are lists (arrays)? 
    // A bunch of values in the same variable

// How do you make lists (arrays) in C?
    int grades[] = {97, 95, 100, 70, 94, 98, 64};
    printf("%d\n", grades[3]); // to print one item we put the index of the item we want to print inside brackets next to the list variable
    grades[2] = 73; // update grades one at a time using the index
    printf("%d\n", grades[2]);
    // In brackets you say how long the list will be but if you are setting them right then you can leave them empty
    // Data type is given as whatever is in the list (all items have to be the same)
    // List items are surrounded by curly brackets{} with commas , between each item
    
    // how to get the size of an array(list)
    printf("%lu\n", sizeof(grades)); // gives you number of bytes that your list takes (8 bits in a byte)
    int length = sizeof(grades)/sizeof(grades[0]);
    printf("%d\n", length);

// How do you make for loops in C?
    // Iterators should be either x or i
    int t;
    // first: in parentheses starting point
    // second: go until point
    // third: what we count by 
    for(t=0; t<=10; t+=2){
        printf("%d\n", t);
    }

    int l;
    for(l=0; l<length; l++){
        printf("%d\n", grades[l]);
    }
// How do you make while loops in C?
    // first: set start point using iterator
    int iterator = 100;
    // second: while line sets stop point
    while(iterator >=0){
        printf("%d\n", iterator);
        // third: set what you count by
        iterator -=10;
    }

    char movies[][20] ={"Cinderella", "Smurfs", "Transformers", "Cars", "Up", "1984"};
    int mlength = sizeof(movies)/sizeof(movies[0]);
    int m = 0;
    while(m<mlength){
        printf("%s\n", movies[m]);
        m++;
    }

    return 0;
}