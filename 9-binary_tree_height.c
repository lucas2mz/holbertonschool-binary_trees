#include "binary_trees.h"
/**
 * count  - function
 * @tree: tree
 * Return: height
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
 * binary_tree_height - function
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (count(tree));
}
