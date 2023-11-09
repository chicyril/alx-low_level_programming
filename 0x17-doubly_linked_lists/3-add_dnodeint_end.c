#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a list
 * @head: address of pointer to the first node in the list
 * @n: data to store in the new node
 *
 * Return: address of the new node on success else null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head, *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (ptr->next)
		ptr = ptr->next;
	new->prev = ptr;
	ptr->next = new;
	return (new);
}
