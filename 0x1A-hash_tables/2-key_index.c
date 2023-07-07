#include "hash_tables.h"

/**
 * key_index - This function gives the index of a key.
 * @key: A key an index is meant for
 * @size: The size of the hash table.
 *
 * Return: key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
