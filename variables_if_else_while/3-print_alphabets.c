#include <stdio.h>

/**
 * main - Entry point
 *
 * this programm is design to print the alphabet
 * in lower and uppercase
 *
 * Return: A;ways 0 (Success)
 */
int main(void)
{
char letter;
/*print lowercase*/
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
/* print uppercase letter*/
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
/*print newline*/
putchar('\n');

return (0);
}
