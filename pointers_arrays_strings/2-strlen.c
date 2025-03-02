#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: pointer to the string
 *
 * Return: Length of the string (excluding the null terminator)
 */
int _strlen(char *s)
{
	int length = 0; /* variable to count the length */

	while (*s != '\0') /* the repate until end of sting */
	{
		length++; /* encrace the length */
		s++; /* move to the next latter */
	}
	return (length);
}
