#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integer
 * @min: minimum value of initialized element
 * @max: maximum value of initialized element
 *
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int i, diff;
	int *ptr = NULL;

	diff = max - min;
	if (diff < 0)
		return (NULL);
	ptr = malloc(sizeof(int) * (diff + 1));
	if (ptr == 0)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
