#include <stdio.h>

int main(void)
{
    char letter = 'a'; // Start with 'a'
    
    // Print lowercase alphabet
    while (letter <= 'z')
    {
        putchar(letter); // Print the current letter
        letter++; // Move to the next letter
    }
    
    letter = 'A'; // Reset letter to 'A' for uppercase
    
    // Print uppercase alphabet
    while (letter <= 'Z')
    {
        putchar(letter); // Print the current letter
        letter++; // Move to the next letter
    }
    
    putchar('\n'); // Print a new line after printing both lowercase and uppercase alphabets
    
    return 0;
}

