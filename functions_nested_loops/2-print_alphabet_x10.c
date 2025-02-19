#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 */
void print_alphabet_x10(void)
{
char ch;
int i;

for (i = 0; i < 10; i++) /* loop 10 times. */
{
for (ch = 'a'; ch <= 'z'; ch++) /* Print each character */
{
_putchar(ch); /* Print each character */
}
_putchar('\n'); /* Print a new line after each alphabet */
}
}
