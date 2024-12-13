#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void playRockPaperScissors() {
    printf("\nWelcome to Rock, Paper, Scissors!\n");
    char *options[] = {"rock", "paper", "scissors"};
    char userChoice[10];
    int computerChoice;

    while (1) {
        printf("Choose rock, paper, or scissors (or 'quit' to exit): ");
        scanf("%s", userChoice);

        if (strcmp(userChoice, "quit") == 0) {
            printf("Exiting Rock, Paper, Scissors.\n");
            break;
        }

        computerChoice = rand() % 3; // Generate a random choice for the computer

        printf("Computer chose: %s\n", options[computerChoice]);

        if (strcmp(userChoice, options[computerChoice]) == 0) {
            printf("It's a tie!\n");
        } else if ((strcmp(userChoice, "rock") == 0 && strcmp(options[computerChoice], "scissors") == 0) ||
                   (strcmp(userChoice, "scissors") == 0 && strcmp(options[computerChoice], "paper") == 0) ||
                   (strcmp(userChoice, "paper") == 0 && strcmp(options[computerChoice], "rock") == 0)) {
            printf("You win!\n");
        } else {
            printf("You lose!\n");
        }
    }
}

void playNumberGuessingGame() {
    printf("\nWelcome to Number Guessing Game!\n");
    int numberToGuess = rand() % 100 + 1;
    int userGuess, attempts = 0;

    while (1) {
        printf("Guess a number between 1 and 100 (or enter 0 to quit): ");
        scanf("%d", &userGuess);

        if (userGuess == 0) {
            printf("Exiting Number Guessing Game.\n");
            break;
        }

        attempts++;

        if (userGuess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else if (userGuess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        }
    }
}

int main() {
    srand(time(0)); // Seed the random number generator
    int choice;

    while (1) {
        printf("\nSelect a game:\n");
        printf("1. Rock, Paper, Scissors\n");
        printf("2. Number Guessing Game\n");
        printf("3. Quit\n");
        printf("Enter your choice (1, 2, or 3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                playRockPaperScissors();
                break;
            case 2:
                playNumberGuessingGame();
                break;
            case 3:
                printf("Thank you for playing! Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
