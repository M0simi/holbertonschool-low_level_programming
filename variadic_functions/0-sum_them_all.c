#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The number of arguments passed.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* list of Variadic */
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n); /* getting started with the list */

	for (i = 0; i < n; i++)
		sum += va_arg(args, int); /* getting every value and put it in the group */

	va_end(args); /* end the list */

	return (sum);
}
