// GP, Functions in C
#include <stdio.h>

// functions bannot be created inside of functions so functions are created above main
//Example 1:
int add(int num_one, int num_two){
    return num_one + num_two;
}

// Example two (No return w/ void):

void greeting(char*name){
    printf("Hello %s, Welcome to my program.\n", name);
}

// Ex. 3:
float area(int length, int width){
    return (float) length * width;
}

int main(){
    // Example 1 continued (function as the value of a variable):
    int total = add(40, 2);
    printf("%d\n", total);

    // Ex. 2 continued (Call function several times):

    greeting("Kohnai");
    greeting("Kenzen");
    greeting("Sentri");
    greeting("Dreni");
    greeting("Nemphirel");

    // Ex. 3 continued (Call a function directly in print statements):
    float rectangle = area(10, 5);
    printf("The area of the rectangle is %.2f\n", rectangle);
    printf("The area is: %.2f\n", area(4,6));

    // function == method

    return 0;
}