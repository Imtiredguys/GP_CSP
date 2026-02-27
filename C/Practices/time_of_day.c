// GP, Time of Day in C
#include <stdio.h>
#include <string.h>

int main() {

    float time;
    printf("What time is it in military time (ex. 13.45): ");
    scanf("%f", time);


    if (time >= 22 && time < 25) {
        printf("Why r u still awake????");
    }else if (time >= 20 && time < 22){
        printf("Okay, well, it's getting pretty late. You should probably go to sleep...please.");
    }else if (time >= 16 && time < 20){
        printf("Good Evening!");
    }else if (time >= 13 && time < 16){
        printf("Good Afternoon!");
    }else if (time >= 10 && time < 13){
        printf("Sup' it's noon");
    }else if (time >= 6 && time < 10){
        printf("Okay, well, it's getting pretty late. You should probably go to sleep...please.");
    }else{
        printf("Wow it's early!");
    };

    return 0;
}