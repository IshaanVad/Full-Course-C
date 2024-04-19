#include <stdio.h>
#include <string.h>

int main() {

    // while loop = repeats a section of code possibly unlimited times.
    // WHILE some condition remains true
    // a while loop might not execute at all

    char name[25];

    printf("\nWhat's your name? ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0) { // checks if length of name is 0 (if user just enters and doesn't type anything)
        printf("\nYou didn't enter your name!");
        printf("\nWhat's your name? ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    return 0;
}