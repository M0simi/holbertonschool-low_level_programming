#include "main.h"


/**
 * times_table - Print the 9 times table, starting from 0.
 */
void times_table(void)
{
int row, col, product;

for (row = 0; row < 10; row++) /* loop for each line (from 0 to 9) */
{
for (col = 0; col < 10; col++) /* loop for each columen (0 - 9) */
{
product = row * col;

if (col != 0) /*Add a comma and a space before each number except the first.*/
{
_putchar(',');
_putchar(' ');
if (product < 10)
_putchar(' ');
}

if (product < 10)
_putchar(product + '0');
else
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
}
_putchar('\n');
}
}
