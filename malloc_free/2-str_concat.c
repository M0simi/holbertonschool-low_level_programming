#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -Concatenates two strings into a newly allocated space in memory.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the new concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, i, j;
char *result;

/* Handle NULL inputs as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

    /* Calculate lengths of both strings */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

    /* Allocate memory for the new concatenated string */
result = malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
return (NULL);

    /* Copy s1 into result */
for (i = 0; i < len1; i++)
result[i] = s1[i];

    /* Copy s2 into result */
for (j = 0; j < len2; j++, i++)
result[i] = s2[j];

    /* Null terminate the new string */
result[i] = '\0';

return (result);
}
