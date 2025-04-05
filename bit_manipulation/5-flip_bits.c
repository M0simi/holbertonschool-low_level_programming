#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;/* XOR to find differing bits */
unsigned int count = 0;

/* Count the number of 1s in xor_result */
while (xor_result)
{
count += xor_result & 1;/* If the last bit is 1, increment count */
xor_result >>= 1;/* Shift right by 1 to check the next bit */
}

return count;
}
