#include "lists.h"

/**
 * free_list - free a node memories of a linked list
 * @head: the list
 */
void free_list(list_t *head)
{
	list_t *ptr = NULL;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
		ptr = NULL;
	}
}
