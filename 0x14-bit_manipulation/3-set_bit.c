#include "main.h"

/**
 * set_bit - set a bit at a given index to 1;
 * @n: number which bit at index is to be set to 1
 * @index: index of the bit to set to 1
 *
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask = 1;

	if (index >= 64)
		return (-1);
	mask <<= index;
	*n |= mask;
	return (1);
}
