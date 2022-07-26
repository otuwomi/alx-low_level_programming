#include "main.h"

/**
 * free_grid - a function to remove memory allocation
 * @grid: block
 * @height: height
 * Return: on success return void
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
