#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str;
	int len;


	str = "My first strlen!!!";
	len = _strlen(str);
	printf("%d\n", len); /* should print: 16 */
	return (0);
}
