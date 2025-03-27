#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A negative value if s1 < s2,
 * A positive value if s1 > s2,
 * 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]); /* deffrence between charcters */
}
i++;
}

return (s1[i] - s2[i]); /* in case of deffrenice in length */
}
