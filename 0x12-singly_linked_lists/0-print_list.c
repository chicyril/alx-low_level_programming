#include "lists.h"

/**
 * print_list - prints the elements of a singly-linked list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr)
	{
		node++;
		if (ptr->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (node);
}
