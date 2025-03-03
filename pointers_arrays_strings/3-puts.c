#include "main.h"


/**
 * _puts - Print a string followed by a new line
 * @str: Pointer to the  string to print
 */
void _puts(char *str)
{
	while (*str != '\0') /* repate until end of the string */
	{
		_putchar(*str); /* print the current letter */
		str++; /* move to the next letter */
	}
	_putchar('\n');
}
