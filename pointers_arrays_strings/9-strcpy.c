#include "main.h"

/**
 * _strcpy - Copies a string including the null terminator.
 * @dest: Destination buffer where the string is copied.
 * @src: Source string to copy.
 *
 * Return: Pointer to `dest`.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0'; /* Copy the null terminator */

return (dest);
}

