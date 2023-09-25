#include "lists.h"

/**
 * pop_listint - delets the first node in list
 * @head: the address of the pointer to the first node
 *
 * Return: the data in the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	int data = 0;

	if (!(*head))
		return (0);
	ptr = *head;
	*head = ptr->next;
	data = ptr->n;
	free(ptr);
	ptr = NULL;
	return (data);
}
