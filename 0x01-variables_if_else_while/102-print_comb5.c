#include <stdio.h>

int main(void)
{
	// Let the tens digit of:
	 first two-digit number be 'm' and second be 'n'
	// Let the ones digit of:
	 first two-digit number be 'q' and second be 'r'
		 
    // Loop through all possible combinations of two two-digit numbers
    for (int m = 0; m < 10; m++)
    {
        for (int q = 0; q < 10; q++)
        {
            for (int n = m; n < 10; n++)
            {
                // Start r from 0 if n is equal to m to avoid duplicate combinations
                int r = (n == m) ? r : 0;

                for (int r = r; r < 10; r++)
                {
                    // Print the combination of two two-digit numbers
                    putchar(m + '0');
                    putchar(q + '0');
                    putchar(' ');
                    putchar(n + '0');
                    putchar(r + '0');

                    // Print comma and space if it's not the last combination
                    if (!(m == 9 && q == 9 && n == 9 && r == 9))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    // Move to the next line
    putchar('\n');

    return 0;
}

