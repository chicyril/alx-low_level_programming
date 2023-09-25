#include "lists.h"

/**
 * free_listint2 - free all memory in a list
 * @head: pointer to the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	if (!head)
		return;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
