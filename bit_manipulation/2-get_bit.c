#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check the bit from.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
/* Check if the index is out of the range of the number's bits */
if (index >= sizeof(n) * 8)/* sizeof(n) * 8 gives the number of bits in n */
return (-1);

/*Shift n totherightbyindexpositions andcheckiftheleastsignificant bit is1or0*/
return ((n >> index) & 1);
}
