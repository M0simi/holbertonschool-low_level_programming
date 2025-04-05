#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The string containing the binary number.
 *
 * Return: The converted number, or 0 if there is an invalid character
 * in the string or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

/* Check if b is NULL */
if (b == NULL)
return (0);

/* Iterate through the string */
for (i = 0; b[i] != '\0'; i++)
{
/* If the character is not '0' or '1', return 0 */
if (b[i] != '0' && b[i] != '1')
return (0);

/* Convert the binary number to a decimal number */
result = result * 2 + (b[i] - '0');
}

return (result);
}
