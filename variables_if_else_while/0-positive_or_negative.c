#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number and determines if it is positive,
 * zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));  /* Seed the random number generator */
n = rand() - RAND_MAX / 2;  /* Generate a random number */

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}

