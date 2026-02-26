// GP, Strings Notes
#include <stdio.h>
#include <string.h>

int main() {
    char subject[] = "Computer Science Principles";
    char book[50]; // number in the brackets gives you the amount of space for the string, spaces included
    char teacher_name[] = "Ms.LaRose";
    int num;

    //Long way of creating string inputs with spaces

    //book[0] = 'T';
    //book[1] = 'h';
    //book[2] = 'e';
    //book[3] = ' ';
    //book[4] = 'W';
    //book[5] = 'a';
    //book[6] = 'y';
    //book[7] = ' ';
    //book[8] = 'o';
    //book[9] = 'f';
    //book[10] = ' ';
    //book[11] = 'K';
    //book[12] = 'i';
    //book[13] = 'n';
    //book[14] = 'g';
    //book[15] = 's';

    //printf("Write a book with a one word name: ");
    //scanf("%s", &book);

    //printf("\nThe book is %s\n", book);

    //short way of creating string inputs with spaces

    printf("Write the name of a book: \n");
    fgets(book, sizeof(book), stdin);


    printf("\nThe book is %f. This is a cool book.\n", book);

    // Concatenation in C // concatination is used to combine two strings
    char name[] = "Vienna";
    char last[] = "LaRose";
    strcat(name, " ");
    strcat(name, last);

    char full_name[20];
    //strcat(full_name, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"); //there isn't enough set space for this so the code will crash

    //printf("%s\n", full_name);

    printf("%s\n", name);

    //length of the string
    printf("%lu", strlen(name));


    return 0;
}