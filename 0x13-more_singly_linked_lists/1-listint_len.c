#include "lists.h"

/**
 * listint_len - count the elements/nodes of a list
 * @h: pointer to the first node in the list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *ptr = h;

	if (!h)
		return (0);
	while (ptr)
	{
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
