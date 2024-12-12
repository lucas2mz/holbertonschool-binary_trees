#include "binary_trees.h"
/**
 * binary_tree_leaves - function
 * @tree: pointer
 * Return: count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;
	
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		count = 1;
	}
	count += binary_tree_leaves(tree->right);
	count += binary_tree_leaves(tree->left);

	return (count);
}
