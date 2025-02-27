#include "main.h"

/**
 * print_square - prints a square using the character '#'.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0) /* if the size 0 or less, just print new line*/
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++) /* controls the number of lines */
	{
		for (j = 0; j < size; j++) /* controls the number of columns */
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
