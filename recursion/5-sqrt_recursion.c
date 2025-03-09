#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if it exists, otherwise -1.
 */
int find_sqrt(int n, int guess)
{
if (guess * guess == n) /* Base case: found the square root */
return (guess);
if (guess * guess > n) /* If guess squared is greater than n, no natural root*/
return (-1);

return (find_sqrt(n, guess + 1)); /* Recursive call with incremented guess */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
if (n < 0) /* If n is negative, it has no natural square root */
return (-1);

return (find_sqrt(n, 0)); /* Start checking from 0 */
}
