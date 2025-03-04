#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: pointer to the string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++) /* a loop going throu all letters */
	{
	if (i % 2 == 0) /* print the current letter */
	_putchar(str[i]); /* move to the next letter after the current */
	}

	_putchar('\n');
}
