// GP, Loops in C
#include <stdio.h>
#include <string.h>
// Includes to get a random number:
#include <stdlib.h>
#include <time.h>

int main() {
    int i = 1;
    while (i <=10){
        printf("%d\n", i);
        i++; 
    }

    //generate a random number
    srand(time(NULL)); // NEEDED FOR GENERATING A RANDOM NUMBER!!!

    printf("%d\n", rand()%10); // %# gives us the largest number the random could be
    printf("%d\n", (rand()%4)+ 1); //gives result anywhere between 1 and 5
    printf("%d\n", rand()%20);

    //Example 2:
    int goose = (rand()%9)+1;
    int count = 1;
    while (count < goose){
        printf("Duck!\n");
        count++; //++ increases count by 1 // -- decreases count by 1
    }
    printf("Goose!\n");

    //Example 3:
    int timer = 30;
    while (timer>0){
        printf("%d\n", timer);
        timer = timer-2;
    }
    printf("Time's Up!"); //what happens once while loop in done //not inside {}

    return 0;
}