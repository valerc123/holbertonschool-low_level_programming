#include "binary_trees.h"

/**
* binary_tree_insert_right - This function inserts a node as the
* right-child of another node
* @parent: pointer to the node to insert the right-child in
* @value: value to store in the new node
*
* Return: pointer of new node or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp;

	if (!new_node || !parent)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	if (new_node->parent->right)
	{
		tmp = new_node->parent->right;
		new_node->parent->right = new_node;
		new_node->parent->right->right = tmp;
		tmp->parent = new_node;
	}
	else
	{
		new_node->parent->right = new_node;
	}

	return (new_node);
}
