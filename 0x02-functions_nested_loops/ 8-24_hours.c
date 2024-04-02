#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
    int hour, minute;

    // Loop through each hour (0 to 23)
    for (hour = 0; hour < 24; hour++)
    {
        // Loop through each minute (0 to 59)
        for (minute = 0; minute < 60; minute++)
        {
            // Print hour (2 digits)
            _putchar(hour / 10 + '0');
            _putchar(hour % 10 + '0');
            _putchar(':');

            // Print minute (2 digits)
            _putchar(minute / 10 + '0');
            _putchar(minute % 10 + '0');

            _putchar('\n'); // Print newline
        }
    }
}

