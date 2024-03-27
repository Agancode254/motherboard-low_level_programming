#include <stdio.h>

int main(void)
{
    // Loop through the first digit
    for (int first_digit = 0; first_digit <= 8; first_digit++)
    {
        // Loop through the second digit, starting from one more than the first digit
        for (int second_digit = first_digit + 1; second_digit <= 9; second_digit++)
        {
            // Print the combination of two digits
            putchar(first_digit + '0');  // Convert the digit to character and print
            putchar(second_digit + '0'); // Convert the digit to character and print

            // Check if this is not the last combination
            if (!(first_digit == 8 && second_digit == 9))
            {
                // Print a comma and a space as separators
                putchar(',');   // Print comma
                putchar(' ');   // Print space
            }
        }
    }

    // Move to the next line
    putchar('\n');

    return 0; // Indicate successful execution
}

