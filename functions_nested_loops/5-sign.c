#include "main.h"

/**
 * print_sign - Determines and prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n > 0, 0 if n  == 0, -1 if n< 0
 */
int print_sign(int n)
{
if (n > 0) /* if the number positive */
{
_putchar('+'); /* print + */
return (1); /* return 1 */
}
else if (n == 0) /* if it's equal to 0 */
{
_putchar('0'); /* print 0 */
return (0); /* return 0 */
}
else /* if the number negative */
{
_putchar('-'); /*print sign of - */
return (-1); /* return -1 */
}
}
