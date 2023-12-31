#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * alloc_grid - allocate a space for grid and evlaute them.
  * @width: width of  a grid.
  * @height: height of a grid.
  * Return: end of the program.
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	while (width > 0 && height > 0)
	{
		grid = malloc(sizeof(int *) * height);
		if (grid == NULL)
			return (NULL);
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int) * width);
			if (grid[i] == NULL)
			{
				for (; i >= 0; i--)
				{
					free(grid[i]);
				}
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
	return (NULL);
}
