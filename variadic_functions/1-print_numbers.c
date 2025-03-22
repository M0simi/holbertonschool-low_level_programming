#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated by a given string.
 * @separator: The string used to separate numbers.
 * @n: The number of integers to print.
 *
 * Return: Nothing (void function).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /* correction the wrong: defination lis parameters */
	unsigned int i;

	va_start(args, n); /* start reading */

	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(args, int)); /* print currect number */

/* print space if not NULL and not last number */
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

printf("\n");
va_end(args);
}
