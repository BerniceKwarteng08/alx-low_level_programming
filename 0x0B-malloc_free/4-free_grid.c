#include "main.h"
#include <stdlib.h>

/**
 * free_grid - prints grid of integers
 * @grid: the address of the two dimensional grid
 * @heigth: height of grid
 * Return: 0 (good to go)
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
