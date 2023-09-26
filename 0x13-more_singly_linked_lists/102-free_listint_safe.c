#include "lists.h"

/**
 * free_listint_safe - free all nodes in a list
 * @h: address of a pointer to first node in the list
 *
 * Return: the number of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr = NULL;
	size_t nodes = 0, ret_val = 0;

	if (!h || !(*h))
		return (0);
	ptr = *h;
	while (ptr)
	{
		nodes++;
		if (ptr <= ptr->next)
			break;
		ptr = ptr->next;
	}
	ret_val = nodes;
	while (*h && nodes > 0)
	{
		ptr = *h;
		*h = ptr->next;
		free(ptr);
		nodes--;
	}
	*h = NULL;
	return (ret_val);
}
