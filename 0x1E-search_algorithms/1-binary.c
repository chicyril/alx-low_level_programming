#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array using binary search.
 * @array: the array.
 * @size: the size of the array
 * @value: the value of the element to search for.
 *
 * Return: the index of the element if found or -1.
**/

int binary_search(int *array, size_t size, int value)
{
	size_t i, left_bound = 0, mid, right_bound = size - 1;

	if (array)
		while (left_bound <= right_bound)
		{
			printf("Searching in array: ");
			for (i = left_bound; i < right_bound; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);

			mid = left_bound + (right_bound - left_bound) / 2;
			if (array[mid] == value)
				return (mid);

			if (value < array[mid])
				right_bound = mid - 1;
			else
				left_bound = mid + 1;
		}

	return (-1);
}
