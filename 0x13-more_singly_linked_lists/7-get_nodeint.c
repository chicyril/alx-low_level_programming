#include "lists.h"

/**
 * get_nodeint_at_index - get the address of a specified node of a list
 * @head: pointer to the first node of the list
 * @index: the intex of the node
 *
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nodeptr = NULL;

	if (!head)
		return (NULL);
	nodeptr = head;
	while (nodeptr && i < index)
	{
		nodeptr = nodeptr->next;
		i++;
	}
	if (i == index)
		return (nodeptr);
	return (NULL);
}
