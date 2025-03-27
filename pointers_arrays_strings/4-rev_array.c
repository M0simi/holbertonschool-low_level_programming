#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
int temp, i;

for (i = 0; i < n / 2; i++)
{
temp = a[i]; /* save the current elemint */
a[i] = a[n - 1 - i]; /* replace the first one with the last one± */
a[n - 1 - i] = temp; /* putting the original in the new place */
}
}
