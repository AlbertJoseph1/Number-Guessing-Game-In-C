#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

// Function to generate a random number within the defined range
int generateRandomNumber() {
    srand(time(0));  // Seed the random number generator
    return (rand() % (MAX - MIN + 1)) + MIN; // Return a number between MIN and MAX
}

// Function to check the user's guess against the random number
int checkGuess(int guess, int randomNumber) {
    if (guess > randomNumber) {
        printf("Too High!\n");
        return 0; // Return 0 for incorrect guess
    } else if (guess < randomNumber) {
        printf("Too Low!\n");
        return 0; // Return 0 for incorrect guess
    } else {
        return 1; // Return 1 for correct guess
    }
}

// Function to ask if the player wants to play again
int playAgain() {
    char choice;
    printf("Do You Wanna Play Again? (y/n): ");
    scanf(" %c", &choice); // Use &choice to pass the address
    return (choice == 'y' || choice == 'Y'); // Return 1 for yes, 0 for no
}
