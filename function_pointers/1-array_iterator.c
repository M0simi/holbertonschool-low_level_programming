#include <stddef.h>  /* To use size_t */

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
