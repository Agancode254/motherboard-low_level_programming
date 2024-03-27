#include <stdio.h>

int main(void)
{
    // Loop through all possible combinations of three digits
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            for (int k = j + 1; k < 10; k++)
            {
                // Print the combination of three digits
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');

                // Print comma and space if it's not the last combination
                if (!(i == 7 && j == 8 && k == 9))
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    // Move to the next line
    putchar('\n');

    return 0;
}

