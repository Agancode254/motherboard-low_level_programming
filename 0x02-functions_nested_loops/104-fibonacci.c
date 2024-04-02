#include <stdio.h>

int main(void)
{
    int first = 1;  // First Fibonacci number
    int second = 2; // Second Fibonacci number

    // Print the first two Fibonacci numbers
    printf("%d, %d", first, second);

    int i;
    for (i = 3; i <= 98; i++) // Start from the 3rd Fibonacci number
    {
        int next = first + second;
        printf(", %d", next);

        // Update Fibonacci numbers for the next iteration
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

