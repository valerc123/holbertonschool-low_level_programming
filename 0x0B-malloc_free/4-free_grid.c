#include "holberton.h"
/**
 *
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		grid[i] = free(grid);
	}
}
