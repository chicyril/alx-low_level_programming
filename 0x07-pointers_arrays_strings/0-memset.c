#include "main.h"

/**
 * _memset - fills n amount of memory with a constant byte b
 * @s: memory area
 * @b: byte parameter
 * @n: number of memory space to fill
 *
 * Return: address of area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
