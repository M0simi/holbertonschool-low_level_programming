#include "main.h"
#include <stdio.h>

/**
 * main - chcek the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _isalpha('H');
_putchar(r + '0'); /* print 1 */
r = _isalpha(';');
_putchar(r + '0'); /* print 0 */
_putchar('\n');

return (0);
}
