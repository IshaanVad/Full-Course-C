#include <stdio.h>

int main() {

    // switch = A more efficient alternative to using many "else if"
    // statements allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    grade = toupper(grade);

    switch(grade) {
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("Nice!\n");
            break;
        case 'C':
            printf("Passed!\n");
            break;
        case 'D':
            printf("Improve!\n");
            break;
        case 'E':
            printf("Improve more!\n");
            break;
        case 'F':
            printf("Oof!\n");
            break;
    }

    return 0;
}