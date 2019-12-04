#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node
* Return: hieght of a binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (!tree)
		return (-1);

	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (h_left > h_right ? h_left : h_right);
}

/**
* binary_tree_balance - This function measures the balance of a binary tree
* @tree: pointer to the root node
* Return: balance factor, otherwise 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);

	balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (balance);
}
