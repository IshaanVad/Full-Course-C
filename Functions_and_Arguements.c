#include <stdio.h>

void birthday(char name[], int age) { // arguements = parameters inside function ()
    printf("\nHappy birthday to %s! You are %d years old!", name, age);
}

int main() {

    birthday("Bro", 21); // arguments/parameters within function ()

    return 0;
}