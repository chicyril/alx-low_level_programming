#include "lists.h"

/**
 * dlistint_len - count the number of nodes in a list
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t nodes = 0;

	while (ptr)
	{
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
