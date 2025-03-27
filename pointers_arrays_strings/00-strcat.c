#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

/* search about end of dest */
while (dest[i] != '\0')
i++;

/* after end of src add dest */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* add null in the end© */
dest[i] = '\0';

return (dest);
}
