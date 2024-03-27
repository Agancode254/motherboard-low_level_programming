#include <stdio.h>

int main(void)
{
    char digit = '0';  // Start with the digit '0'

    // Print digits '0' to '9'
    while (digit < '9')
    {
        putchar(digit);  // Print the current digit
        digit++;        // Move to the next digit
    }

    // Print letters 'a' to 'f'
    while (digit <= 'f')
    {
        putchar(digit);  // Print the current digit
        digit++;        // Move to the next digit
    }

    // Print a newline character to move to the next line
    putchar('\n');

    return 0;
}

