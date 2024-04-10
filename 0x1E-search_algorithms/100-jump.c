#include "search_algos.h"

/**
 * jump_search - search for a value in an array
 * @array: the array.
 * @size: the size.
 * @value: the value.
 *
 * Return: the index of the search element or -1.
**/

int jump_search(int *array, size_t size, int value)
{
	size_t block_size, left_bound  = 0, right_bound;

	block_size = sqrt(size);
	right_bound = block_size;
	printf("Value checked array[%ld] = [%d]\n", left_bound, array[left_bound]);

	while (right_bound < size && value > array[right_bound])
	{
		printf("Value checked array[%ld] = [%d]\n", right_bound, array[right_bound]);
		left_bound = right_bound;
		right_bound += block_size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		left_bound, right_bound);

	if (right_bound >= size)
		right_bound = size - 1;

	while (left_bound <= right_bound)
	{
		printf("Value checked array[%ld] = [%d]\n", left_bound, array[left_bound]);
		if (array[left_bound] == value)
			return (left_bound);
		left_bound++;
	}
	return (-1);
}
