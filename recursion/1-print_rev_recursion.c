#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: Pointer to the string
 *
 * Return: void (nothing)
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* Base case: Stop when reaching the end of the string */
return;

_print_rev_recursion(s + 1); /* Recursive call to move to the next character */
_putchar(*s); /* Print the character after the recursive call */
}
