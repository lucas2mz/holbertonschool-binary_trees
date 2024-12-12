#include "binary_trees.h"
/**
 * count  - Calculates the height of a tree
 * @tree: Tree to be checked
 * Return: The height of the tree
 */
size_t count(const binary_tree_t *tree)
{
	int left_count = 0, right_count = 0;

	if (tree == NULL)
	{
		return (-1);
	}

	left_count = count(tree->left);
	right_count = count(tree->right);

	if (left_count > right_count)
	{
		return (left_count + 1);
	}
	else
		return (right_count + 1);
}
/**
 * binary_tree_balance - Checks if the tree is balanced
 * @tree: The tree to be checked
 * Return: The balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_count = 0, left_count = 0;

	if (tree == NULL)
		return (0);

	left_count = count(tree->left);
	right_count = count(tree->right);

	return (left_count - right_count);
}
