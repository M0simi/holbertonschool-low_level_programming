#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++) /* for each line */
	{
		for (j = 0; j < i; j++) /* print spaces*/
		{
			_putchar(' ');
		}
		_putchar('\\'); /* print diagonal line */
		_putchar('\n');
	}
}
