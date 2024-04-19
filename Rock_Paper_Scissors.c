#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

enum choices {
    Rock = 1,
    Paper = 2,
    Scissors = 3
};

int game(int playerChoice, int computerChoice); // function prototype

int main() {

    srand(time(0));
    int computerChoice = (rand() % 3) + 1;

    int playerChoice;

    printf("\nWelcome to Rock, Paper, or Scissors!\n");

    do {
        printf("\nChoose Rock (1), Paper (2), Scissors (3): ");
        scanf("%d", &playerChoice);
        if (playerChoice != 1 && playerChoice != 2 && playerChoice != 3) {
            printf("\nYou didn't choose 1, 2, nor 3");
        }
    } while (playerChoice != 1 && playerChoice != 2 && playerChoice != 3);

    if (computerChoice == Rock) {
        printf("Computer chose Rock");
    } else if (computerChoice == Paper) {
        printf("Computer chose Paper");
    } else {
        printf("Computer chose Scissors");
    }

    int end = game(playerChoice, computerChoice);

    if (end == 0) {
        printf("\nYou won!");
    } else if (end == 2) {
        printf("\nIt's a tie");
    } else {
        printf("\nYou lost... try again next time");
    }

    return 0;
}

int game(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        return 2;
    }
    if (playerChoice == Rock && computerChoice == Scissors ||
        playerChoice == Paper && computerChoice == Rock ||
        playerChoice == Scissors && computerChoice == Paper) { // player wins
        return 0;
    }
    return 1; // if computer wins
}