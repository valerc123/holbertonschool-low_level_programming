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

/**
* binary_tree_is_perfect - This funciton checks if a binary tree is perfect
* @tree: pointer to the root
*
* Return: if tree is perfect 1, otherwise 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
	{
		if (binary_tree_is_perfect(tree->left) ==
			binary_tree_is_perfect(tree->right))
			return (1);
		else
			return (0);
	}
	else
	{
		return (0);
	}
}
