#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to compute the factorial for.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{

if (n < 0)
return (-1); /* Return -1 for error if n is negative */

if (n == 0)
return (1); /* Base case: factorial of 0 is 1 */

return (n * factorial(n - 1)); /* Recursive call */
}

