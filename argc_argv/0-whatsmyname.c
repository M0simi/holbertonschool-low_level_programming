#include <stdio.h>

/**
 * main - Print the programs name followed by a new line.
 * @argc: Argument count (unused)
 * @argv: Array of arguments (argv[0] contains the program's name).
 *
 * Return: always 0 (success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]); /*print the program name */
	return (0);
}
