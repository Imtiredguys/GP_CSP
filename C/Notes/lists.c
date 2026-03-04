// GP, Lists in C (aka 'arrays')
#include <stdio.h>
#include <string.h>

int main(){
    //Example 1:
    int grades[] = {74, 88, 95, 87, 98};
    printf("%d\n", grades[2]); // the variable[#] says which items are being used

    //Example 2:
    //(how to replacw an item)
    float sizes[] = {3.57, 24.95, 36.1, 5.99};
    printf("%.2f", sizes[0]);
    sizes[0] = 10.45;
    printf("%.2f", sizes[0]);

    //Example 3:
    char names[][20] = {"Kohnai", "Sentri", "Bayen", "Kenzen", "Nemphirel", "Dreni", "Maeora", "Mendek"}; //first bracket is for number of items in array //second bracket is for number of letters allowed in each string
    printf("%s\n", names[5]);

    return 0;
}