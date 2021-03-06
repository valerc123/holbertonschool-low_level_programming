#include "binary_trees.h"

/**
* binary_tree_depth - This functions measures
* the depth of a node in a binary tree
* @tree: pointer to the node to measure the depth
* Return: Depth of node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deph = 0;

	if (!tree)
		return (0);

	deph = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (deph);
}
