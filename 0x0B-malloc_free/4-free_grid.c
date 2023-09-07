#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid
 * @grid: receives 2D grid or array
 * @height: of the array
 *
 * Description: frees all the memory allocated for the 2D array
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
	grid = NULL;
}
