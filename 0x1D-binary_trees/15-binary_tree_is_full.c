#include "binary_trees.h"

/**
* binary_tree_is_full - This function checks if a binary tree is full
* @tree: pointer to the root
* Return: if tree is full 1, otherwise 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left)
		left = binary_tree_is_full(tree->left);

	if (tree->right)
		right = binary_tree_is_full(tree->right);

	if (right == 1 && left == 1)
		return (1);
	else
		return (0);
}
