// GP, Silly Strings
#include <stdio.h>
#include <string.h>

int main() {
    char person[30];
    char person_two[30];
    char place[30];
    char noun[30];
    char noun_two[30];
    char adjective[30];
    char noun_three[30];
    char adjective_two[30];
    char adjective_three[30];

    printf("Give me a one word name person (or use a '_' as a space): \n");
    scanf("%s", person);
    printf("Give me a one word name person (or use a '_' as a space): \n");
    scanf("%s", person_two);
    printf("Give me a one word place (or use a '_' as a space): \n");
    scanf("%s", place);
    printf("Give me a one word noun (or use a '_' as a space): \n");
    scanf("%s", noun);
    printf("Give me a one word noun (or use a '_' as a space): \n");
    scanf("%s", noun_two);
    printf("Give me a one word adjective (or use a '_' as a space): \n");
    scanf("%s", adjective);
    printf("Give me a one word noun (or use a '_' as a space): \n");
    scanf("%s", noun_three);

    strcat(noun_three, "s");

    printf("Give me a one word adjective (or use a '_' as a space): \n");

    strcat(adjective_two, "est");

    scanf("%s", adjective_two);
    printf("Give me a one word adjective (or use a '_' as a space): \n");
    scanf("%s", adjective_three);

    strcat(adjective_three, "est");

    strcat(adjective_two, " ");
    strcat(adjective_two, adjective_three);

    printf("Here is your Madlib: \n");
    printf("\nOne day, %s went to the beach with %s. First, they swam in/at %s. Then they saw the/a(n) %s and the/a(n) %s. It was very %s. Lastly, they built a sand castle out of %s. The was the %s sand castle ever!\n", person, person_two, place, noun, noun_two, adjective, noun_three, adjective_two);

    return 0;
}