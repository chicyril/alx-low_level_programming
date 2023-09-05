#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory allocated to a 2D array
 * @grid: pointer to the 2D array
 * @height: size of the array
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		grid[i] = NULL;
		i++;
	}
	free(grid);
	grid = NULL;
}
