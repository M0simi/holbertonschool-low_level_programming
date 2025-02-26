
#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
char num; /* variable to save the nuumbers */

for (num = '0'; num <= '9'; num++) /* loop for repate the numbers */
{
_putchar(num); /* print the number */
}
_putchar('\n');
}
