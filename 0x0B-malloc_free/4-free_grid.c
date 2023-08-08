#include "main.h"
#include <stdlib.h>
/**
  * free_grid - free the space allocated to grid.
  * @grid: address of the grid to be freed.
  * @height: height of the grid to be cleared.
  * Return: end of the program..
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
