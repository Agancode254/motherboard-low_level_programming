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
    n = rand();

    // Print the last digit of n
    printf("Last digit of %d is %d", n, n % 10);

    // Check the last digit and print the appropriate message
    if (n % 10 > 5)
        printf(" and is greater than 5\n");
    else if (n % 10 == 0)
        printf(" and is 0\n");
    else
        printf(" and is less than 6 and not 0\n");

    // Return 0 to indicate successful execution
    return (0);
}

