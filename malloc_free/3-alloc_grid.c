#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes it to 0.
 * @width: Number of columns.
 * @height: Number of rows.
 *
 * Return: Pointer to the 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

    /* Check for invalid width or height */
if (width <= 0 || height <= 0)
return (NULL);

    /* Allocate memory for row pointers */
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

    /* Allocate memory for each row */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* Free previously allocated rows before returning NULL */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

/* Initialize all elements to 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
