#include "lists.h"

/**
 * print_listint_safe - prints the data and address of each node in the list
 * @head: the pointer to the first node in the list
 *
 * Return: the number of unique nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = NULL, *chkloop = NULL;
	size_t nodes = 0, count;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr)
	{
		printf("[%p] %d\n", (void *) ptr, ptr->n);
		nodes++;
		ptr = ptr->next;
		chkloop = head;
		count = 1;
		while (count <= nodes)
		{
			if (chkloop == ptr)
			{
				printf("-> [%p] %d\n", (void *) ptr, ptr->n);
				return (nodes);
			}
			chkloop = chkloop->next;
			count++;
		}
	}
	return (nodes);
}
