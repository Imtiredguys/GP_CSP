// GP, Financial Calculator C
#include <stdio.h>

int main() {
    
    float monthly_income;
    float rent;
    float utilities;
    float groceries;
    float transportation;
    float savings;
   
    printf("How much is your %f? \n", monthly_income);
    scanf("%f", &monthly_income);

    printf("How much is your %f? \n", rent);
    scanf("%f", &rent);

    printf("How much is your %f? \n", utilities);
    scanf("%f", &utilities);

    printf("How much is your %f? \n", groceries);
    scanf("%f", &groceries);

    printf("How much is your %f? \n", transportation);
    scanf("%f", &transportation);

    printf("What do you want put in savings %f? \n", savings);
    scanf("%f", &savings);
    
    int savings_but_like_real_this_time = savings * 100;
    
    float monthly_spending = ("%d", monthly_income - (savings_but_like_real_this_time + rent + utilities + groceries + transportation));

    return 0;
}