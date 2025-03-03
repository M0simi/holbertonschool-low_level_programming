#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed
 */
void print_rev(char *s)
{
	int length = 0; /* variable to count the length of string */
	/* counting the string length */
	while (s[length] != '\0')
	{
		length++;
	}

	/* reverse printing */
	while (length >0)
	{
		length--; /* Decrease length first to get to last character */
		_putchar(s[length]); /* print the currnt letter */
	}
	_putchar('\n'); 
}
