#include <stdio.h>

int main(void)
{
    int fib[50];
    int i;

    // Initialize the first two Fibonacci numbers
    fib[0] = 1;
    fib[1] = 2;

    // Generate the rest of the Fibonacci numbers
    for (i = 2; i < 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci numbers separated by comma and space
    for (i = 0; i < 49; i++)
    {
        printf("%d, ", fib[i]);
    }

    // Print the last Fibonacci number followed by a newline
    printf("%d\n", fib[49]);

    return 0;
}

