#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototype
int simpleGenerate();

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Call the simpleGenerate function
    int quantity = simpleGenerate();

    // Output the result
    printf("Generated quantity: %d\n", quantity);

    return 0;
}

// Function to generate a random integer quantity
int simpleGenerate() {
    return rand() % 100 + 1; // Generate a number between 1 and 100
}
