#include "hash_tables.h"
/**
 * hash_table_set - set a value into a hash table
 * @ht: Hash table
 * @key: Key
 * @value: Value
 *
 * Return: 1 - success or 0 - failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index_h = 0;
	hash_node_t *temp;

	if (!ht || !key || !value)
		return (0);

	index_h = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index_h] != NULL && strcmp(ht->array[index_h]->key, key) == 0)
	{
		free(ht->array[index_h]->value);
		ht->array[index_h]->value = strdup(value);
		return (1);
	}
	temp = malloc(sizeof(hash_node_t));
	if (!temp)
		return (0);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = ht->array[index_h];
	ht->array[index_h] = temp;
	return (1);
}
