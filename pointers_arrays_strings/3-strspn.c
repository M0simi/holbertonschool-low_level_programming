#include "main.h"
#include <stddef.h>  /* For NULL */

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of c in s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
while (*s)  /* Iterate through the string */
{
if (*s == c)  /* If character is found */
return (s);  /* Return pointer to the position */
s++;  /* Move to the next character */
}

if (*s == c)  /* Check the last character (in case it's '\0') */
return (s);

return (NULL);  /* Return NULL if character is not found */
}
