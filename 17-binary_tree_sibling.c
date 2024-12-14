#include "binary_trees.h"
/**
 * binary_tree_sibling - Checks if a node has a sibling
 * @node: The node to check
 * Return: Temp or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *aux, *temp = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	aux = node->parent;
	if (aux->left != NULL && aux->right != NULL)
	{
		if (aux->left == node)
		{
			temp = aux->right;
		}
		else
		{
			temp = aux->left;
		}
	}
	else
	{
		return (NULL);
	}

	binary_tree_sibling(node->left);
	binary_tree_sibling(node->right);

	return (temp);
}
