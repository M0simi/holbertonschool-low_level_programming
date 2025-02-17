#include <stdio.h>

/**
 * main - entry point
 *
 * description: print the lowercase alphabet except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			if (letter != 'q' && letter !='e') /* skip 'q' and 'e'*/
				putchar(letter);
		}
	putchar('\n'); /*print newline at the end*/
			 return (0);
			 }
