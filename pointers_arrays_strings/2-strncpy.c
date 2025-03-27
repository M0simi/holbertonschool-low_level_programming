#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* copy 'src' to 'dest' until 'n' 0\ or * */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* if 'src' shorter than 'n' countinue with 0\ */
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
