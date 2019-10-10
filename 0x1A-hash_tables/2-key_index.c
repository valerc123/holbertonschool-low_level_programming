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
	unsigned int i;

	hash = 0, i = 0;

	while (key && key[i])
	{
		hash = (hash + key[i]) % size;
		++i;
	}
	return (hash);
}
