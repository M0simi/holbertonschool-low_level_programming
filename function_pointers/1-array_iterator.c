#include <stddef.h>  /* To use size_t */

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @action: Pointer to the function to execute on each element.
 *
 * Description: This function loops through the given array and applies
 * the function `action` to each element. If `array` or `action` is NULL,
 * the function does nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* declare i before the for loop */

	if (array == NULL || action == NULL)  /* Check for valid inputs */
	return;


	for (i = 0; i < size; i++)  /* Iterate through each element */
	{
	action(array[i]);  /* Call the function and pass the current element */
	}
}
