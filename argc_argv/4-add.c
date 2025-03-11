#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 if successful, 1 if an invalid argument is found.
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
char *c;

if (argc == 1) /* No numbers provided */
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (c = argv[i]; *c; c++) /* Check each character */
{
if (*c < '0' || *c > '9') /* If not a digit */
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]); /* Convert to int and add */
}

printf("%d\n", sum);
return (0);
}
