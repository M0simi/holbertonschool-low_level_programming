#include <stddef.h>  /* To use NULL */

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function used for comparison.
 *
 * Return: Index of the first element for which cmp does not return 0.
 *         -1 if no match is found or if size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;  /* Declare index variable */

if (array == NULL || cmp == NULL || size <= 0)  /* Check for valid inputs */
return (-1);

for (i = 0; i < size; i++)  /* Iterate through the array */
{
if (cmp(array[i]) != 0)  /* Check if cmp function returns non-zero */
return (i);  /* Return the index of the first match */
}

return (-1);  /* No match found */
}
