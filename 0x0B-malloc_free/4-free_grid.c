#include "main.h"

/**
 * free_grid - frees a 2d array created by alloc_grid function
 * @grid: pointed function parameter
 * @height: input parameter
 * Return: void none
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
