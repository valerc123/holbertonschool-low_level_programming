#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of size
 * @size: size of table
 *
 * Return: ptr to table else NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);
	new_ht->size = size;
	new_ht->array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));
	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}

	while (size--)
		new_ht->array[size] = NULL;

	return (new_ht);
}
