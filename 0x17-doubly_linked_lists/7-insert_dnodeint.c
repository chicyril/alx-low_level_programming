#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at an index in a list
 * @h: address of a pointer to the the first node in the list
 * @idx: index to insert a new node
 * @n: data to store in the new node
 *
 * Return: address of the new node on success else null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *pptr = NULL, *ptr = *h;
	unsigned int nnum = 0;

	if (!h || (!*h && (idx > 0)))
		return (NULL);
	while (ptr && (nnum < idx))
	{
		pptr = ptr;
		ptr = ptr->next;
		nnum++;
	}
	if (nnum != idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = ptr;
	new->prev = pptr;
	if (ptr)
		ptr->prev = new;
	if (pptr)
		pptr->next = new;
	else
		*h = new;
	return (new);
}
