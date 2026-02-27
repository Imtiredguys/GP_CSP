// GP, Financial Calculator C
#include <stdio.h>

int main() {
    
    float monthly_income;
    float rent;
    float utilities;
    float groceries;
    float transportation;
    float savings;
   
    printf("How much is your monthly income? ");
    scanf("%f", &monthly_income);

    printf("\nHow much is your monthly rent cost? ");
    scanf("%f", &rent);

    printf("\nHow much are your monthly utilities cost? ");
    scanf("%f", &utilities);

    printf("\nHow much are your monthly groceries cost? ");
    scanf("%f", &groceries);

    printf("\nHow much is your monthly transportation cost? ");
    scanf("%f", &transportation);

    printf("\nWhat percent of your income do you want put into savings? ");
    scanf("%f", &savings);
    
    int savings_but_like_real_this_time = savings * 100;
    
    float monthly_spending = ("%d", monthly_income - (savings_but_like_real_this_time + rent + utilities + groceries + transportation));

    printf("%f", monthly_income);

    return 0;
}