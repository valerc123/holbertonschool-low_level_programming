#include "hash_tables.h"
/**
* key_index - Find the index of the key passed
* @key: The key to find in the hash table
* @size: The size of the hash table.
* Return: The index of the item
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hash;

	if (!key || !size)
		return (0);
	hash = hash_djb2(key);
	return (hash % size);
}
