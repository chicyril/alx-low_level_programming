#include "main.h"

/**
 * clear_bit - set bit at an index to 0
 * @n: the number whose bit is to be set to 0
 * @index: the index of the bit
 *
 * Return: 1 on success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask = 1;

	if (index >= 64)
		return (-1);
	mask <<= index;
	*n &= (~mask);
	return (1);
}
