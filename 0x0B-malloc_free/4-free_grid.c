#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * string given as a parameter.
 * @grid: array to free
 * @height: height of the array.
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}

	free(grid);
}
