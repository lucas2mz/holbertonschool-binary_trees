#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function
 * @node: node
 * Return: return
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	return (0);

}
