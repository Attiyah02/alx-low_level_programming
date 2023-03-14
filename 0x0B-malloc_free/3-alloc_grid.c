#include "main.h"

/**
 * alloc_grid - allocates grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 *
 * Return: grid with free spaces
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int c, d;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < height; c++)
	{
		grid[c] = malloc(sizeof(int) * width);
		if (grid[c] == NULL)
		{
			for (c = c - 1; c >= 0; c--)
			{
				free(grid[c]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (c = 0; d < width; d++)
		grid[c][d] = 0;
	return (grid);
}
