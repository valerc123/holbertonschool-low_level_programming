#include "hash_tables.h"
/**
* hash_table_create - This function creates a new Hashtable
* @size: The size of the hastable's array.
* Return: a pointer to the newly allocated Hashtable
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	if (size < 1)
	{
		return (NULL);
	}
	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
	{
		return (NULL);
	}

	new_ht->array = (hash_node_t **) malloc(sizeof(hash_node_t) * size);
	if (new_ht->array == NULL)
	{
		return (NULL);
	}
	memset(new_ht->array, 0, size * sizeof(hash_node_t));
	new_ht->size = size;
	return (new_ht);
}
