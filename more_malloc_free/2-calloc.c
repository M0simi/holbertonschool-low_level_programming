#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc and initializes it to 0.
 * @nmemb: Number of elements.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to allocated memory, or NULL if allocation fails or if
 *         nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i, total_size;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);

for (i = 0; i < total_size; i++)
ptr[i] = 0;

return (ptr);
}
