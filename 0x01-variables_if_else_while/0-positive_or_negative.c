#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Entry point of the program
int main(void)
{
    int n;

    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number and assign it to variable n
    n = rand() - RAND_MAX / 2;

    // Print the randomly generated number
    printf("%d ", n);

    // Check if the number is positive, negative, or zero and print accordingly
    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");

    // Return 0 to indicate successful execution
    return (0);
}

