#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = print_sign(98); /* should print "+" and return 1 */
_putchar(',');
_putchar(' ' );
_putchar(r + '0'); /* print the return value "1" */
_putchar('\n');

r = print_sign(0);; /* should print "0" and return 0 */
_putchar(',');
_putchar(' ');
_putchar(r + '0'); /* print the return value "0" */
_putchar('\n');

r = print_sign(0xff); /* (positive 255 = xff because 0) should print "+" and return 1 */
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');

r = print_sign(-1); /* should print "-" and retun -1 */
_putchar(',');
_putchar(' ');
_putchar(r + '0');  /* print the value return (but may not show "-1" in correct way */
_putchar('\n');

return (0);
}
