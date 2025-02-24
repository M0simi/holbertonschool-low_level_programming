#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _abs(-1);
_putchar(r + '0');
_putchar('\n');

r = _abs(0);
_putchar(r + '0');
_putchar('\n');

r = _abs(1);
_putchar(r + '0');
_putchar('\n');

r = _abs(-98);
if (r >= 10)
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
else
{
_putchar(r + '0');
}
_putchar('\n');

return (0);
}
