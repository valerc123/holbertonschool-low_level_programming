#include "hash_tables.h"
/**
 * create_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);

	if (!node->value || !node->key)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

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
	unsigned long int index;
	hash_node_t *node, *tmp;
	char *dup_value;

	if (!ht || !ht->array || ht->size == 0 ||
	    !key || strlen(key) == 0 || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			dup_value = strdup(value);
			if (!dup_value)
				return (0);
			free(tmp->value);
			tmp->value = dup_value;
			return (1);
		}
		tmp = tmp->next;
	}
	node = create_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

