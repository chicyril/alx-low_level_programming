#include "main.h"

/**
 * get_bit - get the bit at an index of a number
 * @n: the number
 * @index: the index of the bit to get
 *
 * Return: the value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 64)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
