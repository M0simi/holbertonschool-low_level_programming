#include "main.h"

/**
 * main - check the code
 *
 * Rutern: Always 0.
 */
int main(void)
{
int r;

print_last_digit(98); /* print 8 */
print_last_digit(0); /* print 0 */
r = print_last_digit(-1024);; /* print 4 */
_putchar('0' + r); /* print the return number from the function */
_putchar('\n');

return (0);
}
