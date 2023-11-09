#include "lists.h"

/**
 * print_dlistint - Print the elements of each node in a doubly-linked list
 * @h: pointer to the first node in the list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t nodes = 0;

	while (ptr)
	{
		nodes++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (nodes);
}
