#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: address of pointer to the first node in the list
 * @n: data to add in the new node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL, *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
		*head = new;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}

