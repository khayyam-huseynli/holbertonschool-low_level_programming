#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*free_grid - function that frees a 2d grid
*             2 dimensional array of integers
*
*@grid:   2d array
*@height: height of 2d array
*
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
