#include "lists.h"

/**
 * reverse_listint - reverse the list link
 * @head: pointer to the first node of the link
 *
 * Return: a pointer to the first node of the reversed link
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *swap = NULL, *adv = NULL;

	if (!(*head))
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	adv = swap = *head;
	*head = NULL;
	while (adv)
	{
		adv = adv->next;
		swap->next = *head;
		*head = swap;
		swap = adv;
	}
	return (*head);
}
