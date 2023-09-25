#include "lists.h"

/**
 * sum_listint - sum up the int data in all the nodes in the list
 * @head: pointer to the first node of the list
 *
 * Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	if (!head)
		return (0);
	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
