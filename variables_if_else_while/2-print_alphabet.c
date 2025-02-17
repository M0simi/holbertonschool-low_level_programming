#include <stdio.h>

/**
 * main - Entry point
 *
 * Desciption: Prints the lowercase alphabet only `putchar()`
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a' ; letter <= 'z'; letter++) /* loop through 'a' to 'z'*/
putchar(letter); /* Print each letter*/
putchar('\n'); /* print newline at the end*/

return (0);
}
