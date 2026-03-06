// GP, Updated Finacial Calculator in C
#include <stdio.h>

void mspc(char* category, int scan){
    printf("What is your monthly %s? ", category);
    scanf("\n%d", scan);
}

int ppsc(int spending, int monthly_income){
    return spending/monthly_income * 100;
}



int main(){
    int income = mspc("income", income);
    int rent = mspc("rent/mortgage", rent);
    int utilities = mspc("utilities", utilities);
    int groceries = mspc("groceries", groceries);
    int transportation = mspc("transportation", transportation);

    int percent_rent = ppsc(rent, income);
    int percent_utilities = ppsc(rent, income);
    int percent_groceries = ppsc(rent, income);
    int percent_transportation = ppsc(rent, income);

    printf(" \n");

    printf("Your rent is %d which is %.2f percent of your income\n", income, percent_rent);
    printf("Your utilities is %d which is %.2f percent of your income\n", income, percent_utilities);
    printf("Your groceries is %d which is %.2f percent of your income\n", income, percent_groceries);
    printf("Your transportation is %d which is %.2f percent of your income\n", income, percent_transportation);
    // turn into function
    return 0;
}