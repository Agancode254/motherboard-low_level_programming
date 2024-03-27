#include <stdio.h>

int main(void)
{
    char letter = 'z';  // Start with the letter 'z' since we are reversing

    // Loop through the lowercase alphabet in reverse
    while (letter >= 'a')
    {
        // Print the current letter
        putchar(letter);

        // Move to the previous letter
        letter--;
    }

    // Print a newline character to move to the next line
    putchar('\n');

    return 0;
}

