#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: pointer to the string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0') /* a loop going throu all letters */
	{
		_putchar(str[i]); /* print the current letter */
		i += 2; /* move to the next letter after the current */
	}

	_putchar('\n'); 
}
