#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

void playGame() {
    int guess;
    int randomNumber = generateRandomNumber();
    int attempts = 0;

    printf("Guess a number between %d and %d:\n", MIN, MAX);

    // Using a do-while loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (checkGuess(guess, randomNumber)) {
            printf("Congratulations! You guessed the number!\n");
            break;
        }
        attempts++;
    } while (1);

    printf("You took %d attempts.\n", attempts);
}

int main() {
    char playAgainResponse;

    printf("Welcome to the Number Guessing Game!\n");

    do {
        playGame();
    } while (playAgain());

    printf("Thanks for playing!\n");
    return 0;
}
