#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: Argument count.
 * @argv: Argument vector (array of arguments, unused here).
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1); /* Subtract 1 because argv[0] is the program name*/
	return (0);
}
