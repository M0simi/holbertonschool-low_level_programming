#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of memory to allocate
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function terminates the program with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b); /* Allocate memory */
	if (ptr == NULL) /* Check if allocation failed */
	exit(98); /* Terminate the program with status 98 */

	return (ptr); /* Return the allocated memory pointer */
}
