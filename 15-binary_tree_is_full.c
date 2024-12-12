#include "binary_trees.h"
/**
 *
 *
 * */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		count = 1;
	}
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

}
