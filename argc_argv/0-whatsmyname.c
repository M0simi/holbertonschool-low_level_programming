#include <stdio.h>

/**
 * main - print the programs name followed by a new line
 * @argc: argument count (unused)
 * @argv: array of arguments (argv[0] contains the program's name).
 *
 * Return: always 0 (success).
 */
int main(int Xyargc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]); /*print the program name */
	return (0);
}
