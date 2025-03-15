#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2D grid previously allocated by alloc_grid.
 * @grid: The 2D array to be freed.
 * @height: Number of rows in the grid.
 *
 * Return: Nothing (void function).
 */
void free_grid(int **grid, int height)
{
int i;

/* Check if grid is NULL to avoid errors */
if (grid == NULL)
return;

/* Free each row */
for (i = 0; i < height; i++)
free(grid[i]);

/* Free the main array */
free(grid);
}
