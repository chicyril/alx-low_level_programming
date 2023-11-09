#include "lists.h"

/**
 * get_dnodeint_at_index - get the address of a node at an index of a list
 * @head: a pointer to the first node in the list
 * @index: the index of the node to return
 *
 * Return: the address of the node or Null if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int node_num = 0;

	while (node && (node_num < index))
	{
		node = node->next;
		node_num++;
	}
	if (!head || (node_num != index))
		return (NULL);
	return (node);
}
