#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

    /* Handle leading non-numeric characters and signs */
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
break;
i++;
}

    /* Convert number part */
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}

return (result *sign);
}
