// GP, Time of Day in C
#include <stdio.h>

int main() {

    float time;
    printf("What time is it in military time (ex. 13.45): ");
    scanf("%f", &time);


    if (time >= 22.0 && time < 25.0) {
        printf("You're Awake?!");
    }else if (time >= 20.0 && time < 22.0){
        printf("Okay, well, it's getting pretty late. You should probably go to sleep...please.");
    }else if (time >= 16.0 && time < 20.0){
        printf("Good Evening!");
    }else if (time >= 13.0 && time < 16.0){
        printf("Good Afternoon!");
    }else if (time >= 10.0 && time < 13.0){
        printf("Sup' it's noon");
    }else if (time >= 6.0 && time < 10.0){
        printf("Okay, well, it's getting pretty late. You should probably go to sleep...please.");
    }else{
        printf("Wow it's early!");
    };

    return 0;
}