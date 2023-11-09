#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index in a list
 * @head: address of the pointer to the first node in the list
 * @index: index of node to delete
 *
 * Return: 1 on success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pre = NULL, *cur = *head, *nxt = NULL;
	unsigned int nnum = 0;

	if (!head || !*head)
		return (-1);
	while (cur && (nnum < index))
	{
		pre = cur;
		cur = cur->next;
		nnum++;
	}
	if (!cur || (nnum != index))
		return (-1);
	nxt = cur->next;
	if (*head == cur)
		*head = nxt;
	if (pre)
		pre->next = nxt;
	if (nxt)
		nxt->prev = pre;
	cur->prev = NULL;
	cur->next = NULL;
	free(cur);
	cur = NULL;
	return (1);
}
