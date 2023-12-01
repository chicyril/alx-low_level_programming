#include "hash_tables.h"

/**
 * hash_table_set - add an element in a hash table.
 * @ht: pointer to the hash table.
 * @key: key of the element to be added.
 * @value: value of the element to be added.
 *
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_data = NULL, *cell_ptr = NULL;

	if (!ht || !key || (value == NULL))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	cell_ptr = ht->array[index];
	while (cell_ptr)
	{
		if (strcmp(cell_ptr->key, key) == 0)
		{
			free(cell_ptr->value);
			cell_ptr->value = strdup(value);
			return (1);
		}
		cell_ptr = cell_ptr->next;
	}
	new_data = malloc(sizeof(hash_node_t));
	if (!new_data)
		return (0);
	new_data->key = strdup(key);
	if (!new_data->key)
	{
		free(new_data);
		return (0);
	}
	new_data->value = strdup(value);
	if (!new_data->value)
	{
		free(new_data->key);
		free(new_data);
		return (0);
	}
	new_data->next = NULL;
	if (ht->array[index])
		new_data->next = ht->array[index];
	ht->array[index] = new_data;
	return (1);
}
