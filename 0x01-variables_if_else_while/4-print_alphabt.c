#include <stdio.h>

int main(void)
{
    char letter = 'a'; // Start with 'a'

    // Loop through the alphabet
    while (letter <= 'z')
    {
        // Check if the current letter is not 'q' or 'e'
        if (letter != 'q' && letter != 'e')
        {
            // Print the current letter
            putchar(letter);
        }
        letter++; // Move to the next letter
    }

    // Print a new line after printing the alphabet
    putchar('\n');

    return 0;
}

