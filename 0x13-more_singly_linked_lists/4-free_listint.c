#include "lists.h"

/**
 * free_listint - free all memory in a list
 * @head: pointer to the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = NULL;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	ptr = NULL;
}
