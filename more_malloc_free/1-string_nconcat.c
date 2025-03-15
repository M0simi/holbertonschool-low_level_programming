#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string manually.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *s)
{
unsigned int len = 0;

if (s == NULL)
return (0);

while (s[len] != '\0')
len++;

return (len);
}

/**
 * string_nconcat - Concatenates two strings, using at most n bytes from s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to take from s2.
 *
 * Return: Pointer to the newly allocated space in memory containing s1
 *         followed by the first n bytes of s2, and null-terminated.
 *         If malloc fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int len1, len2, i, j;

len1 = _strlen(s1);
len2 = _strlen(s2);

if (n >= len2)
n = len2;

new_str = malloc(len1 + n + 1);
if (new_str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
new_str[i] = s1[i];

for (j = 0; j < n; j++, i++)
new_str[i] = s2[j];

new_str[i] = '\0';

return (new_str);
}
