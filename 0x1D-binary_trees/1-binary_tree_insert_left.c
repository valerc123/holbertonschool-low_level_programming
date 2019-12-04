#include "binary_trees.h"

/**
* binary_tree_insert_left - This function inserts a node as the
* left-child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
*
* Return: pointer of new node or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->left = tmp;
		tmp->parent = new_node;
	}
	else
	{
		parent->left = new_node;
	}

	return (new_node);
}
