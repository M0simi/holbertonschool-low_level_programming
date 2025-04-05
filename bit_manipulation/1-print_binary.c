#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
int bit_found = 0; /* Flag to track if we've found the first '1' */
int i;
/* Check if each bit of n is 1 or 0, starting from the highest bit */
for (i = sizeof(n) * 8 - 1; i >= 0; i--)
{
/* Shift the bit to the right and check if it is 1 or 0 */
if ((n >> i) & 1)
{
/* If it's the first '1' we find, start printing */
_putchar('1');
bit_found = 1;
}
else if (bit_found) /* Only print '0' after the first '1' has been printed */
{
_putchar('0');
}
}

/* If no bits were printed, print 0 for the number 0 */
if (!bit_found)
_putchar('0');
}
