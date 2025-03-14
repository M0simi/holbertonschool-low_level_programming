#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The strinng to duplicate.
 *
 * Return:pointer to the duplicated string, or NULL if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0') /* calculate length of string */
		length++;

	dup = malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	/* copy string to new memory */
	for (i = 0; i < length; i++)
		dup[i] = str[i];

	/* end strinng with NULL character */
	dup[length] = '\0';

	return (dup);
}
