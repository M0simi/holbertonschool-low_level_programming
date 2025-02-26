#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of times the character '_' should be printed.
 */
void print_line(int n)
{
	int i;
	
	if (n > 0) /*if n > 0 do the print */
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_'); /* print the line*/
		}
	}
	_putchar('\n');
}
