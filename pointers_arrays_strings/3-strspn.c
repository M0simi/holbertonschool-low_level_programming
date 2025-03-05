#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The main string to search in
 * @accept: The substring containing acceptable characters
 *
 * Return: The number of bytes in the initial segment of s
 *         that consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
		s++;
	}

	return (count);
}
