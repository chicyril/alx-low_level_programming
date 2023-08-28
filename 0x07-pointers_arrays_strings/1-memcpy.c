#include "main.h"

/**
 * _memcpy - copy n memory from src to dest
 * @dest: destination buffer parameter
 * @src: source
 * @n: size to coppy
 *
 * Return: modified dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
