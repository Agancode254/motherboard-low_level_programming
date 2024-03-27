#include <stdlib.h>

int main(void)
{
    // Save the number p
    int p = '0';

    // Use the for loop
    for (p = '0'; p <= '9'; p++)
    {
        putchar(p);
        // Check if p is not equal to '9'
        if (p != '9')
        {
            putchar(',');
        }
    }
    putchar('\n');
    return (0);
}

