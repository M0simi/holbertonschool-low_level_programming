#include "main.h"

/**
 * _isdigit - check if the character is digit
 * @c - charcter to check
 *
 * Return 1 if charcter is digit
 * otherwise 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
