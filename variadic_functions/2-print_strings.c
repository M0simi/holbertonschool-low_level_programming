#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a given separator.
 * @separator: The string used to separate strings.
 * @n: The number of strings to print.
 *
 * Return: Nothing (void function).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;  /* List of parameters */
unsigned int i;
char *str;

va_start(args, n);  /* start pick up perameters */

for (i = 0; i < n; i++)
{
str = va_arg(args, char *); /* pick up the string */

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

        /* print the sprent if not NULL or the lsdt one  */
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

printf("\n");
va_end(args);
}

