#include "main.h"

/**
 * rev_string - Reverses a string in-place
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
int i, length = 0;
char temp;

/* counting the length of string  */
while (s[length] != '\0')
{
length++;
}

/* 2 Reverse characters using switching */
for (i = 0; i < length / 2; i++)
{
temp = s[i];  /* save the current letter */
s[i] = s[length - 1 - i];  /* replace it with the corresponding letter  */
s[length - 1 - i] = temp;  /* puting the saved letter in new place  */
}
}
