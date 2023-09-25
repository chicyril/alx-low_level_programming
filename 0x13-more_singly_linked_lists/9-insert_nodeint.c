#include "lists.h"

/**
 * insert_nodeint_at_index - add a new node at a specified index
 * @head: address of the pointer to the list
 * @idx: index to add new node
 * @n: data to add in the new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *shiftnode = NULL, *newnode = NULL, *prevnode = NULL;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (!(*head) || idx == i)
	{
		if (idx != i)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	shiftnode = *head;
	while (shiftnode && i < idx)
	{
		prevnode = shiftnode;
		shiftnode = shiftnode->next;
		i++;
	}
	if (i != idx)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = shiftnode;
	prevnode->next = newnode;
	return (newnode);
}
