#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table.
 * @size: the size of the hash table array.
 *
 * Return: a pointer to the created hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;

	if (size == 0)
		return (NULL);
	sht = malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);
	sht->array = calloc(size, sizeof(shash_node_t *));
	if (!sht->array)
	{
		free(sht);
		return (NULL);
	}
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	return (sht);
}

/**
 * update_sorted_list - update the sorted list of a hash table.
 * @ht: pointer to the hash table.
 * @new_kval: element to add to the sorted list.
 */
void update_sorted_list(shash_table_t *ht, shash_node_t *new_kval)
{
	shash_node_t *ptr = NULL;

	if (strcmp(new_kval->key, ht->shead->key) < 0)
	{
		ht->shead->sprev = new_kval;
		new_kval->snext = ht->shead;
		ht->shead = new_kval;
		return;
	}
	ptr = ht->shead;
	while (ptr->snext)
	{
		if (strcmp(ptr->snext->key, new_kval->key) > 0)
			break;
		ptr = ptr->snext;
	}
	if (ptr->snext)
		ptr->snext->sprev = new_kval;
	else
		ht->stail = new_kval;
	new_kval->snext = ptr->snext;
	new_kval->sprev = ptr;
	ptr->snext = new_kval;
}

/**
 * shash_table_set - add an element to the hash table.
 * @ht: pointer to the hash table data structure.
 * @key: key to be added.
 * @value: value of the key to be added.
 *
 * Return: 1 on success else 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_kval = NULL, *update_kval = NULL;
	unsigned long int index = 0;

	if (!ht || !key || (value == NULL))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	update_kval = ht->array[index];
	while (update_kval)
	{
		if (strcmp(update_kval->key, key) == 0)
		{
			free(update_kval->value);
			update_kval->value = strdup(value);
			return (1);
		}
		update_kval = update_kval->next;
	}
	new_kval = malloc(sizeof(shash_node_t));
	if (!new_kval)
		return (0);
	new_kval->key = strdup(key);
	new_kval->value = strdup(value);
	if (!new_kval->key || (new_kval->value == NULL))
	{
		if (new_kval->key)
			free(new_kval->key);
		free(new_kval);
		return (0);
	}
	new_kval->next = ht->array[index];
	ht->array[index] = new_kval;
	new_kval->snext = new_kval->sprev = NULL;
	if (!ht->shead)
	{
		ht->shead = new_kval;
		ht->stail = new_kval;
		return (1);
	}
	update_sorted_list(ht, new_kval);
	return (1);
}

/**
 * shash_table_get - get the value associated with a key in a soted hash table
 * @ht: pointer to the hash table.
 * @key: key to search for.
 *
 * Return: value of key or NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ptr = NULL;
	unsigned long int index = 0;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print the data in sorted hash table.
 * @ht: pointer to the hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr = NULL;
	bool first_print = true;

	if (!ht)
		return;
	ptr = ht->shead;
	printf("{");
	while (ptr)
	{
		if (first_print)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			first_print = false;
		}
		else
			printf(", '%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the data in sorted hash table in a reverse.
 * @ht: pointer to the hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr = NULL;
	bool first_print = true;

	if (!ht)
		return;
	ptr = ht->stail;
	printf("{");
	while (ptr)
	{
		if (first_print)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			first_print = false;
		}
		else
			printf(", '%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete a sorted hash table.
 * @ht: pointer to the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr = NULL, *del = NULL;

	if (!ht)
		return;
	ptr = ht->shead;
	while (ptr)
	{
		del = ptr;
		ptr = ptr->snext;
		free(del->value);
		free(del->key);
		free(del);
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
