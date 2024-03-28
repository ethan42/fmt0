// Program that generates a random number and then asks the user to guess it.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv) {
    int number, guess;
    srand(time(0));
    number = rand(); // Generates a random number between 0 and RAND_MAX
    if (argc > 1) printf(argv[1]);
    printf("\nGuess the number: "); fflush(stdout);
    scanf("%d", &guess);
    if (guess == number) {
        printf("Congratulations! You guessed the number in one shot. HOW?\n");
        return 0;
    }
    printf("Bad luck! The number was 0x%08x (%d)\n", number, number);
    return 0;
}