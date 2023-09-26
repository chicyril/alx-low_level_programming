#include "lists.h"

/**
 * find_listint_loop - find a loop in a linked list
 * @head: pointer to the first node in the list
 *
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = NULL;

	if (!head)
		return (NULL);
	ptr = head;
	while (ptr)
	{
		if (ptr <= ptr->next)
		{
			ptr = ptr->next;
			break;
		}
		ptr = ptr->next;
	}
	return (ptr);
}
