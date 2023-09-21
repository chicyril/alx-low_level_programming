#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 * @head: a pointer to a pointer to the list
 * @str: data to add
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	if (str == NULL)
	{
		new->str = strdup("(nil)");
		new->len = 0;
	}
	else
	{
		for (; str[len]; len++)
			;
		new->str = strdup(str);
		new->len = len;
	}
	*head = new;
	return (*head);
}
