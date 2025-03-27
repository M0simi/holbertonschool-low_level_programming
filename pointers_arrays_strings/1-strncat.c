#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to use from src
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

/* find end of dest */
while (dest[i] != '\0')
i++;

/* add src maximum n byteª */
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* add nullto the end if doesn't skip n */
dest[i] = '\0';

return (dest);
}
