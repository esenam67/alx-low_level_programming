#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - check function
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
