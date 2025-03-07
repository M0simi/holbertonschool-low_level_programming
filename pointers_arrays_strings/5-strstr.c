#include "main.h"
#include <stddef.h>  /* Needed for NULL */

/**
 * _strstr - Finds the first occurrence of a substring in a string
 * @haystack: The main string to search in
 * @needle: The substring to look for
 *
 * Return: Pointer to the start of the found substring,
 *         or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle) /* If needle is empty, return haystack */
		return (haystack);

	while (*haystack) /* Loop through haystack */
	{
		h = haystack;
		n = needle;

		/* Check if the substring matches */
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (!*n) /* If we reached the end of needle, we found a match */
			return (haystack);

		haystack++; /* Move to the next character in haystack */
	}

	return (NULL); /* No match found */
}
