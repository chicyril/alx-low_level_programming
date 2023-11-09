#include "lists.h"

/**
 * sum_dlistint - sum up the datas in the nodes of a list
 * @head: pointer to the first node in the list
 *
 * Return: sum or 0 if no node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
