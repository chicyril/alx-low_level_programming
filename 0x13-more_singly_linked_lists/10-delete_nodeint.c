#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at index of a list
 * @head: address of the pointer to list
 * @index: index of the pointer to delete
 *
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevnode = NULL, *killnode = NULL;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	killnode = *head;
	if (index == i)
	{
		*head = (*head)->next;
		free(killnode);
		killnode = NULL;
		return (1);
	}
	while (killnode && i < index)
	{
		prevnode = killnode;
		killnode = killnode->next;
		i++;
	}
	if (i != index)
		return (-1);
	prevnode->next = killnode->next;
	free(killnode);
	killnode = NULL;
	return (1);
}
