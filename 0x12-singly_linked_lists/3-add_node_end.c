#include "lists.h"

/**
 * add_node_end - add new node at the end of a singly linked list
 * @head: pointer to the list
 * @str: element of a new list
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *ptr = NULL;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->str = strdup("(nil)");
		new->len = 0;
		new->next = NULL;
	}
	else
	{
		for (; str[len]; len++)
			;
		new->str = strdup(str);
		new->len = len;
		new->next = NULL;
	}
	if (*head == NULL)
		*head = new;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
