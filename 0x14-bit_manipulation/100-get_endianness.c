#include "main.h"

/**
 * get_endianness - check the endianness of a system
 *
 * Return: 0 if big endian
 */
int get_endianness(void)
{
	unsigned char *check = (unsigned char *)&check;

	return (*check);
}
