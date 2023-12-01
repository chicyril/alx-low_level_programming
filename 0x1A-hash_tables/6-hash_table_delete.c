#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cell_ptr = NULL, *ptr = NULL;
	unsigned long int index = 0;

	if (!ht)
		return;
	for (; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			cell_ptr = ht->array[index];
			while (cell_ptr)
			{
				ptr = cell_ptr;
				cell_ptr = cell_ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
			}
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
