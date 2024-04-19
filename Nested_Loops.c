#include <stdio.h>

int main() {

    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    getchar(); // deals with \n buffer from prior scanf | OR use "scanf("%c");"

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol); // can also put a space before the %c to handle the \n buffer from prior scanf: " %c"

    for (int i = 0; i < rows; i++) { // nested for loop
        for (int j = 0; j < columns; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}