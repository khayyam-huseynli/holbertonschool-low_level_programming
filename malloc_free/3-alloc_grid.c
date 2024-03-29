#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*alloc_grid - function that returns a pointer to a
*             2 dimensional array of integers
*
*@width:  width of 2d array
*@height: height of 2d array
*
*Return: returns pointer to a 2d array of integers,
*        NULL on failure or If width or height
*        is 0 or negative
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);

			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
