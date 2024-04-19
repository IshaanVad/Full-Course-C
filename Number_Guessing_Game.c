#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int MIN = 1;
    const int MAX = 10;
    int guess, guesses, answer;

    // uses the current time as a seed
    srand(time(0));

    // number between 1 and 10
    answer = (rand() % MAX) + MIN;

    do {
        printf("\nGuess a number between 1 - 10: ");
        scanf("%d", &guess);

        if (guess > answer) {
            printf("Too high!\n");
            guesses++;
        } else if (guess < answer) {
            printf("Too low!\n");
            guesses++;
        }
    } while (guess != answer);

    printf("That is the correct guess. It took you %d guesses.", guesses);

    return 0;
}