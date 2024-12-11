#include "binary_trees.h"
/**
 * binary_tree_insert_right - function
 * @parent: parent
 * @value: value
 * Retunr: rightnode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode, *temp = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	rightnode = malloc(sizeof(binary_tree_t));

	rightnode->n = value;
	rightnode->right = NULL;
	rightnode->left = NULL;

	if (parent != NULL)
	{
		temp = parent->right;
		parent->right = rightnode;
	}
	rightnode->parent = parent;

	if (temp != NULL)
	{
		rightnode->right = temp;
		temp->parent = rightnode;
	}
	return (rightnode);
}
