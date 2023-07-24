#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number within a given range
int generate_random_number(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    int min_range = 1;
    int max_range = 100;
    int target_number, guess;
    int attempts = 0;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate the target number
    target_number = generate_random_number(min_range, max_range);

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between %d and %d. Try to guess it!\n", min_range, max_range);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < target_number) {
            printf("Too low! Try again.\n");
        } else if (guess > target_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", target_number, attempts);
        }
    } while (guess != target_number);

    return 0;
}
