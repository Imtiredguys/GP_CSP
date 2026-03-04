// GP, For Loops in C
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Example 1:
    for(int i = 20; i >= 0; i--){
        printf("%d ", i);
    }
    //Example 2:
    srand(time(NULL));
    int guess = 0;

    for(int num = rand() %20 +1; num != guess; num = num){
        printf("\nGuess a number between 1 and 20: ");
        scanf("%d", &guess);
        if (guess == num){
            printf("You won!\n");
            break;
        }else if(guess < num){
            printf("Your guess is too low\n");
        }else{
            printf("Your guess is too high\n");
        }
    }
    printf("Game over!\n");  
    
    //Example 3:
    char names[][20] = {"Kohnai", "Sentri", "Bayen", "Kenzen", "Nemphirel", "Dreni", "Maeora", "Mendek"}; //first bracket is for number of items in array //second bracket is for number of letters allowed in each string
    printf("%s\n", names[5]);

    int length = sizeof(names)/ sizeof(names[0]);

    for(int x = 0; x < length; x++){
        printf("%s is one of my characters\n", names[x]);
    }


    return 0;
}