// GP, Variable Notes For C
#include <stdio.h> // lets us create inputs and outputs

int main() { // always has to be inside of a function
    int number = 12; // every statement has to end in a semi collen // must put int, float, or char before variable name
    float pi = 3.14;
    char name[] = "Xavier";
    char person[50];
    int age; // starting point for setting up an input // 1) data type name;
    printf("Tell me how old you are\n"); // 2) print instructions for user
    scanf("%d", &age); // last part of setting up an input // 3) taken in input using: scanf("%datatype", &variable_name);
    printf("Tell me your name\n");
    scanf("%s", &person);
    printf("We have the number %d\n", number); // d is a placeholder for int // \n tells the computer to move to the next line
    printf("%f\n", pi); // f is a place holder for float
    printf("%s is %d years old\n", person, age); // s is a placeholder for char (strings) // also printf means print format you always use printf when using C
    return 0; //always is the last line of main
}

