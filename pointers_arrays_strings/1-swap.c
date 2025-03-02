#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	int temp; /* A temporary variable to store a value during a switch */

	temp = *a; /* store the original value of "a" inside the temporary variable */
	*a = *b;  /* putting the value of 'b' inside 'a' */
	*b = temp; /* putting th original value of 'a' inside 'b' */
}
