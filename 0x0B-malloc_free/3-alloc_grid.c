#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: no of columns
 * @height: no of rows
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid =  (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grif[i]);
			return (NULL);
		}
	}
	return (grid);
}
