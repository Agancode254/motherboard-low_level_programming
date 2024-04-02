#include <stdio.h>

int main(void)
{
    int fib_prev = 1; // Previous Fibonacci number
    int fib_curr = 2; // Current Fibonacci number
    int sum = 0;      // Sum of even-valued terms

    while (fib_curr <= 4000000)
    {
        if (fib_curr % 2 == 0)
        {
            sum += fib_curr; // Add even-valued term to sum
        }

        // Update Fibonacci numbers
        int next = fib_prev + fib_curr;
        fib_prev = fib_curr;
        fib_curr = next;
    }

    printf("Sum of even-valued terms in Fibonacci sequence: %d\n", sum);

    return 0;
}

