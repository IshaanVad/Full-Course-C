#include <stdio.h>

int main() {

    /*
    > greater than
    >= greater than or equal to
    < less than
    <= less than or equal to
    == is equal to
    != does not equal to
    */

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 13 && age <= 18) { // condition statement
        printf("You are a teen.");
    } else {
        printf("You aren't a teen.");
    }

    return 0;
}