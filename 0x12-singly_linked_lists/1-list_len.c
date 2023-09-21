#include "lists.h"

/**
 * list_len - counts the number of elements (nodes) of a singly linked list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr)
	{
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
