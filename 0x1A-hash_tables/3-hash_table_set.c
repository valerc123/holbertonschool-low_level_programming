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
	unsigned long int index = 0;
	char *dup_key;
	char *dup_value;
	hash_node_t *tmp;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	dup_key = strdup(key);
	dup_value = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, dup_key) == 0)
		{
			tmp->value = dup_value;
			return (1);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (0);

	tmp->key = dup_key;
	tmp->value = dup_value;
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);
}
