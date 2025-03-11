#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments.
 * @argc: Argument count (number of arguments passed).
 * @argv: Argument vector (array of strings containing arguments).
 *
 * Return: 0 if successful, 1 if incorrect number of arguments is given.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

/* Ensure exactly two arguments are provided */
if (argc != 3)
{
printf("Error\n");
return (1);
}

/* Convert arguments from strings to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

/* Perform multiplication */
result = num1 *num2;

/* Print the result */
printf("%d\n", result);

return (0);
}
