#include "main.h"
#include <stddef.h> /* to use null */

/**
 * _strpbrk - search a string for the first occurrence of any a set of bytes
 * @s: The string to search in
 * @accept: The set of bytes to search for
 *
 * Return: A pointer to the first matching byte, or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s) /* move through the string s */
	{
		char *a = accept;
		while (*a) /* check each character in accept */

		{
			if (*s == *a) /* if a match is found */
				return s; /* return a pointer to this characters in s */
			a++; /* move to the next character in accept */
		}
		s++; /* move to the next character in s */
	}
return NULL;
}
