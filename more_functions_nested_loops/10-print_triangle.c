#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using '#'
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
int row, spaces, hashes;

if (size <= 0) /* if size 0 or less print new line only */
{
_putchar('\n');
return;
}

for (row = 1; row <= size; row++) /* repate for each row in the triangle */
{
for (spaces = size - row; spaces > 0; spaces--) /* print spaces */
{
_putchar(' ');
}

for (hashes = 1; hashes <= row; hashes++) /* print # */
{
_putchar('#');
}

_putchar('\n'); /* move to the next line */
}
}
