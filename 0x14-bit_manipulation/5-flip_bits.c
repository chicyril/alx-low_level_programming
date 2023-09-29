#include "main.h"

/**
 * flip_bits - count position with different bits between two numbers
 * @n: num1
 * @m: num2
 *
 * Return: the number of position different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long diff;
	unsigned int bitcount = 0;

	diff = n ^ m;
	while (diff)
	{
		bitcount += diff & 1;
		diff >>= 1;
	}
	return (bitcount);
}
