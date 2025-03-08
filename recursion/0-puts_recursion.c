#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: Pointer to the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: End of the string */
	{
		_putchar('\n'); /* Print a new line */
		return;
	}

	_putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Recursive call for the next character */
}
