#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by the alloc_grid function.
 *
 * @grid: address of 2D grid
 * @height: height of grid from alloc_grid
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
