#include "main.h"

/**
 * check_prime - Helper function to check if a number is prime recursively.
 * @n: The number to check.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
if (n <= 1) /* 0 and 1 are not prime numbers */
return (0);
if (divisor * divisor > n) /*If divisor squared is greater than n, it's prime*/
return (1);
if (n % divisor == 0) /* If n is divisible by divisor, it's not prime */
return (0);

return (check_prime(n, divisor + 1)); /* Recursive call with next divisor */
}

/**
 * is_prime_number - Determines if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
return (check_prime(n, 2)); /* Start checking from 2 */
}
