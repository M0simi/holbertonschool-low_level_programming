#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, ten times.
 */
void more_numbers(void)
{
	int i, num;

for (i = 0; i < 10; i++) /* repate ten times */
{
for (num = 0; num <= 14; num++) /* print from 0 to 14 */
{
if (num > 9) /* if number bigger than 9 print the two numbers */
_putchar((num / 10) + '0'); /* print the first one */
_putchar((num % 10) + '0'); /* print the second number */
}
_putchar('\n');
}
}
