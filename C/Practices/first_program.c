// GP, First Program using C
#include <stdio.h>

int main() {
    char name[32];
    printf("Tell me your name: ");
    scanf("%s", &name);
    printf("Welcome to the world of C %s!", name);
    return 0;
}