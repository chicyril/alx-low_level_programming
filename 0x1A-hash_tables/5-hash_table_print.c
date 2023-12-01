#include "hash_tables.h"

/**
 * hash_table_print - Print all the key/val pair in a hash table.
 * @ht: the hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cell_ptr = NULL;
	unsigned long int index = 0;
	bool first_print = true;

	if (!ht)
		return;
	printf("{");
	for (; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			cell_ptr = ht->array[index];
			while (cell_ptr)
			{
				if (first_print)
				{
					printf("'%s': '%s'", cell_ptr->key, cell_ptr->value);
					first_print = false;
				}
				else
					printf(", '%s': '%s'", cell_ptr->key, cell_ptr->value);
				cell_ptr = cell_ptr->next;
			}
		}
	}
	printf("}\n");
}
