#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to compute
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
if (n < 0) /* if it's negetive*/
return (-n); /* return the posetive value*/
return (n); /* if it's posetive or 0, return it the same */
}
