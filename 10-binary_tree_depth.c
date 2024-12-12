#include "binary_trees.h"
/**
 * binary_tree_depth - function
 * @tree: pointer
 * Return: count depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
