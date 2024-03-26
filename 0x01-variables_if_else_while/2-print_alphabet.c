#include <stdio.h>

int main(void)
{
    char letter = 'a'; // Start with 'a'

    while (letter <= 'z') // Loop from 'a' to 'z'
    {
        putchar(letter); // Print the current letter
        letter++; // Move to the next letter
    }

    putchar('\n'); // Print a new line after printing the alphabet

    return 0;
}

