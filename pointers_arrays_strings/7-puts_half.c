#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int length = 0, start;

	/* couting the length of the string */
	while (str[length] != '\0')
		length++;

	/* counting the start point from the string */
	start = (length % 2 == 0) ? (length / 2) : ((length + 1) / 2);


	/* printing the second half of the string */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
