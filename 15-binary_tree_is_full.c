#include "binary_trees.h"
/**
 *
 *
 * */
int is_full(const binary_tree_t *tree)
{
	int count = 0;


	if (tree == NULL)
		return (0);

	if (!tree->left != !tree->right)
	{
		count++;
	}

	count += is_full(tree->right);
	count += is_full(tree->left);

	return (count);
}

/**
 *
 *
 * */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int result;

	if (tree == NULL)
		return (0);

	result = is_full(tree);

	if (result == 0)
		return (1);

	return (0);
}
