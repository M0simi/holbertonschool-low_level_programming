#include "main.h"
#include <stdio.h>

/**
 * main - Test the _isupper function
 *
 * Return: Always 0
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c)); /* output: A: 1 */
c = 'a';
printf("%c: %d\n", c, _isupper(c)); /* Output: a: 0 */

return (0);
}
