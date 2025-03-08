#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix.
 * @size: The size of the matrix (number of rows/columns).
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int i, primary_sum = 0, secondary_sum = 0;

    for (i = 0; i < size; i++)
    {
        primary_sum += a[i * size + i]; /* Primary diagonal */
        secondary_sum += a[i * size + (size - 1 - i)]; /* Secondary diagonal */
    }

    printf("%d, %d\n", primary_sum, secondary_sum);
}
