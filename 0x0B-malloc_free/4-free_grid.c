#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid created  alloc_grid
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
free(grid);
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
