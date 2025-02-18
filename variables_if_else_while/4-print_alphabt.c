#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e') /* Skip 'q' and 'e' */
putchar(letter);
}

putchar('\n'); /* Print newline at the end */

return (0);
}
