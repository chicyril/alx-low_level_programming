#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: character containing the binary number
 *
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, twos = 1;
	int len = 0;

	if (!b)
		return (0);
	for (; b[len]; len++)
		if (!(b[len] >= '0' && b[len] <= '1'))
			return (0);
	for (len -= 1; len >= 0; len--, twos <<= 1)
		if (b[len] == '1')
			num += twos;
	return (num);
}
