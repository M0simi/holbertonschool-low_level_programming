#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: 2D array representing the chessboard
 *
 * Description: Iterates through the given 8x8 array and prints
 * each character in its respective position, followed by a newline
 * after each row to maintain the board structure.
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++) /* Loop through rows */
{
for (j = 0; j < 8; j++) /* Loop through columns */
{
putchar(a[i][j]); /* Print each character */
}
putchar('\n'); /* Move to the next line after each row */
}
}
