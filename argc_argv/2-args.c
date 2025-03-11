#include <stdio.h>

/**
 * main - Prints all arguments received, one per line.
 * @argc: Argument count (number of arguments passed).
 * @argv: Argument vector (array of strings containing arguments).
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]); /* print every elemints in argv in new line */
	}

	return (0);
}
