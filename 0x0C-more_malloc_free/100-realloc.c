#include <stdlib.h>
#include "main.h"

/**
 * _realloc - realocates a memory block
 * @ptr: pointer to memory block
 * @old_size: size of old memory block
 * @new_size: size of realocated memory
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *c_ptr = (char *)ptr;
	char *nptr = NULL;

	if (new_size == 0 && !(ptr == NULL))
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (nptr);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			nptr[i] = c_ptr[i];
		free(ptr);
		ptr = NULL;
		c_ptr = NULL;
	}
	return (nptr);
}
