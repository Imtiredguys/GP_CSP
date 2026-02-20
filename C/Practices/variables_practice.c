// GP, Variables Practice for C
#include <stdio.h>

int main() {
    char name[] = "Patterson";
    char eye_color[] = "Hazel?";
    int age = 14;
    char favorite_color[] = "Blue";
    int unlucky_number = 11;
    char breakfast[] = "Bagels";
    char school[] = "UCAS";
    float GPA = 3.5;
    char favorite_subject[] = "It depends on the day and how tired I am";
    int year = 2026;
    printf("Student mini profile:\n \nStudent Name: %s\nEye color: %s\nAge: %d\nFovorite color: %s\n'Unkucky Number': %d\nFavorite breakfast food: %s\nSchool: %s (obviously)\nGPA: %f (estimated)\nFavorit subject: %s\nCurrent year: %d", name, eye_color, age, favorite_color, unlucky_number, breakfast, school, GPA, favorite_subject, year);
    return 0;
}