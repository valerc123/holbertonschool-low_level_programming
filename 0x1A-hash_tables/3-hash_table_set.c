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
	hash_node_t *node, *tmp;
	char *new_value;

	if (!ht || !ht->array || ht->size == 0 || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp != NULL && strcmp(tmp->key, key) == 0)
	{
		new_value = strdup(value);
		if (new_value == NULL)
			return (0);
		free(tmp->value);
		tmp->value = new_value;
		return (1);
	}

	node = create_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
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
