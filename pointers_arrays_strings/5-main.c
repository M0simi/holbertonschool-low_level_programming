#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "My school";

	printf("%s\n", s); /* print the original string */
	rev_string(s);
	printf("%s\n", s); /* printing the string after reversed */
	return (0);

}
