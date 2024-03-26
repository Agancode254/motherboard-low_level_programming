#include <stdio.h>

int main(void)
{
    // Print the size of various types
    printf("Size of a char: %ld byte(s)\n", sizeof(char));
    printf("Size of an int: %ld byte(s)\n", sizeof(int));
    printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
    printf("Size of a float: %ld byte(s)\n", sizeof(float));

    // Return 0 to indicate successful execution
    return 0;
}


