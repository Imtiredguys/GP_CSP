// GP, Integers and Floats Notes
#include <stdio.h> 
#include <math.h> // needed for specific math stuff like exponants and rounding 

int main() {
    int apples = 10;
    int people = 6;
    int hour = 12;
    int minutes = hour * 60;

    printf("%d, %d, %d\n", apples, people, hour);

    printf("%f\n", (float)apples/people); // C can't automatically convert an int to a float so we have to change the intergers into a float
    printf("%d hours is %d minutes\n", hour, minutes);

    float pi = 3.14159265;
    float liters = 8.3;
    float years = 22.5;
    float cups = liters * 4.22675;
    float root = sqrt(10); // sqrt() give the square root of a number

    printf("%f, %.1f, %.2f\n", pi, liters, years); // %.#f allows us to say how many decimal point we want if we don't specify then it automatically give us 6 decimal point regardess of whether the decimal had more or less deciamal points
    printf("%.1f liters is %.1f cups\n", liters, cups);
    printf("%.2f in Fahrenheit is %.2f in Celsius\n", 70.0, (70.0 -32)*5/9); // code breaks if number (in this case 70.0) isn't a float // in this case because we aren't using a variable just putting numbers in directly we can change the %f to a %d
    printf("%f\n", (int)round(pi)); // the round() rounds the number //int converts the number to an integer // int round() converts it to a rounded integer
    printf("%f\n", (int)pow(2, 23)); // pow(#, #) makes it a # to the power or an exponant // the fist letter it saying to which power and the second one is saying what number has an exponant
    printf("%.2f", root);

    return 0;
}