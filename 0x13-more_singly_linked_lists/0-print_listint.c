#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the first node in the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *ptr = h;

	if (!h)
		return (0);
	while (ptr)
	{
		nodes++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (nodes);
}
