// GP, Updated Finacial Calculator in C
#include <stdio.h>

void mspc(char* category){
    printf("What is your monthly %s? \n", category);
}

float ppsc(char* cftp, float variable){
    printf("Your %s is ");
}



int main(){
    float i;
    mspc("income");
    scanf("%f", i);
    float r;
    mspc("rent/mortgage");
    scanf("%f", i);
    float u;
    mspc("utilities");
    scanf("%f", i);
    float g;
    mspc("groceries");
    scanf("%f", i);
    float t;
    mspc("transportation");
    scanf("%f", i);
    // add the scanf to the function
     


    return 0;
}