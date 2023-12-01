#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: hash table pointer.
 * @key: key whose value is to be retrieved.
 *
 * Return: value(str) or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cell_ptr = NULL;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	cell_ptr = ht->array[index];
	while (cell_ptr)
	{
		if (strcmp(cell_ptr->key, key) == 0)
			return (cell_ptr->value);
		cell_ptr = cell_ptr->next;
	}
	return (NULL);
}
