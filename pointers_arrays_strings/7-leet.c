#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string
 *
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char leet_chars[] = "4433007711";

for (i = 0; str[i] != '\0'; i++) /* going throw every charcter in the string */
{
for (j = 0; letters[j] != '\0'; j++) /* search for matching charcter */
{
if (str[i] == letters[j]) /* only condetion that's allowed */
{
str[i] = leet_chars[j]; /* replace charcter */
break;
}
}
}
return (str);
}
