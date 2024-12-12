#include "binary_trees.h"
/**
 * is_full - Verify if the tree is full
 * @tree: Tree to check
 * Return: count
 */
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
 * binary_tree_is_full - Checks if a tree is full
 * @tree: Tree to be checked
 * Return: 1 if is full or 0 if is not
 */
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
