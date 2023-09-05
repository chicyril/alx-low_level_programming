#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2D array of integers
 * @width: length of element array
 * @height: number of arrays
 *
 * Return: a pointer to 2D array or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = NULL;
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
				p[j] = NULL;
			}
			free(p);
			p = NULL;
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
