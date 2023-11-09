#include "lists.h"

/**
 * add_dnodeint - add a new node at the begining of a list
 * @head: address of the pointer to the first node
 * @n: data to store in the new node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
