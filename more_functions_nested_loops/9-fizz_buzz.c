#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) /* if the number is a multiple of 3 and 5 */
			printf("fizzBuzz");
		else if (i % 3 == 0) /* if the number is a multiple of 3 */
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf(" % d", i);

		if (i != 100) /* print space after every number except the last one */
			printf(" ");
	}
	printf("\n");
	return (0);
}
