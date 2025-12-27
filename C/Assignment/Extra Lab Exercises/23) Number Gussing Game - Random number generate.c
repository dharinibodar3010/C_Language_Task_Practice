#include <stdio.h>
#include <stdlib.h>   // for rand() and srand()
#include <time.h>     // for time()

int main() {
    int luckynumber, guess, attempts = 0;
    int maxAttempts = 5; // Limit number of attempts
    int lower = 1, upper = 100;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    luckynumber = (rand() % (upper - lower + 1)) + lower;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Chose a  Lucky number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    // do...while loop for guessing
    do 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == luckynumber) 
        {
            printf("Congratulations! You guessed the correct number %d in %d attempts!\n", luckynumber, attempts);
            break;
        } 
        else if (guess < luckynumber) 
        {
            printf("Too low! Try a higher number.\n");
        } 
        else 
        {
            printf("Too high! Try a lower number.\n");
        }

      printf("Attempts left: %d\n\n", maxAttempts - attempts);

    } 
    
    while (attempts < maxAttempts);

    // If user fails to guess
    if (attempts == maxAttempts && guess != luckynumber) 
    {
        printf("You've used all attempts! The Lucky Number was %d.\n", luckynumber);
    }

    return 0;
}
