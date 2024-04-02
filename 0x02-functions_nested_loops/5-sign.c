#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *        -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
    // Check if n is greater than zero
    if (n > 0)
    {
        _putchar('+'); // Print +
        return 1; // Return 1
    }
    // Check if n is zero
    else if (n == 0)
    {
        _putchar('0'); // Print 0
        return 0; // Return 0
    }
    // If n is less than zero
    else
    {
        _putchar('-'); // Print -
        return -1; // Return -1
    }
}

