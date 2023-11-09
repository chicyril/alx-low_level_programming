#include "lists.h"

/**
 * free_dlistint - frees all nodes in chained list
 * @head: pointer to the first node in the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *uhuru = NULL;

	while (head)
	{
		uhuru = head;
		head = head->next;
		free(uhuru);
	}
}
