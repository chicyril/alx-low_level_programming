#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: call-back function use to compare
 *
 * Return: index of the first match or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
