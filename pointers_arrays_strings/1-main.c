#include "main.h"
#include <stdio.h>


int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b); /* before switshing: a=98, b=42 */
	swap_int(&a, &b); /* passing the address of variables to the function */
	printf("a=%d, b=%d\n", a, b); /* after sweching: a=42, b=98 */
	return (0);
}
