#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n;i++)
	{
		printf("%d", va_arg(args, int)); /* print currect number */

/* print space if not NULL and not last number */
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

printf("\n");
va_end(args);
}
