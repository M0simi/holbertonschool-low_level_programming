#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
*@n: The number to extract last digit from
*
*Return: The last digit of n
*/
int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10; /* counting the last number */

if (last_digit < 0) /* if it's  negative we change it to posetiva */

last_digit = -last_digit;

_putchar(last_digit + '0'); /* print the last number */

return (last_digit); /* return the last number */
}
