#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is out of the range of the number's bits */
if (index >= sizeof(*n) * 8)/* sizeof(*n) * 8 gives the number of bits in n */
return (-1);

/* Create a mask with a 0 at the given index and 1 at all other positions */
*n = *n & ~(1UL << index);

return (1);
}
