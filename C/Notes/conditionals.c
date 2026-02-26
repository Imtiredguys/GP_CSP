// GP, Conditionals Notes
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int grade;
    bool admin = true;

    printf("Tell me your grade (just number don't add percent sign): ");
    scanf("%d", &grade);

    if (grade >= 90) {
        if (grade > 93){
            printf("You have a %d percent. That's an A!\n", grade);
        }else{
           printf("You have a %d percent. That's an -A.\n", grade); 
        }
    } else if (grade >= 80) {
        printf("You have a %d percent. That's an B.\n", grade);
    } else if (grade >= 70) {
        printf("You have a %d percent. That's an C.\n", grade);
    } else if (grade >= 60) {
        printf("You have a %d percent. That's an D.\n", grade);
    } else {
        printf("You have a %d percent. That's an F :(\n", grade);
    };

    int num;
    printf("Tell me a number between -15 and 15: ");
    scanf("%d", &num);

    if (num%2 == 0 && (num <10 && num > -10)){
        printf("%d is a single digit even number.\n", num);
    }else if (num%2 != 0 && (num <10 && num > -10)){
        printf("%d is a single digit odd number.\n", num);
    }else{
        printf("%d isn't a single digit odd number.\n", num);
    };

    char name[] = "Eric";

    if (strcmp(name, "Cora") == 0){
        printf("Welcome Admin!");
    }else{
        printf("Hello %s\n", name);
    };

    return 0;
}