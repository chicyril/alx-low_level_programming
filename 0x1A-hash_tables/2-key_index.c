#include "hash_tables.h"

/**
 * key_index - get the index of a key in a hash table.
 * @key: the key.
 * @size: the size of the hash table array.
 *
 * Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val = hash_djb2(key);

	return (hash_val % size);
}
