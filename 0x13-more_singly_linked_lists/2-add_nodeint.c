#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of a list
 * @head: pointer to the first node of the list
 * @n: data to store in the new node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
