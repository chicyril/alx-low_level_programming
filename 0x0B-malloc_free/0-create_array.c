#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array dynamically
 * @size: size of the array
 * @c: initialization value
 *
 * Return: pointer to the array of character or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p = NULL;

	p = (char *)malloc(size * sizeof(c));
	if (size == 0 || p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
