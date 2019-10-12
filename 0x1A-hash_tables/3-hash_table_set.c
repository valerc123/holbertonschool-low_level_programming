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
	hash_node_t *tmp;
	char *dup_value, *dup_key;

	if (!ht || !ht->array || ht->size == 0 || !key || strlen(key) == 0 || !value)
		return (0);

	dup_key = strdup(key);
	dup_value = strdup(value);

	index = key_index((const unsigned char *)key, ht->size);
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

	tmp = create_node(key, value);
	if (!tmp)
		return (0);
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);
}

/**
* create_node - Creates a new node of hash_node_t type
* @key: key for the node
* @value: value for the node
* Return: new node created, or NULL on failure
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (!new_node->key || !new_node->value)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
