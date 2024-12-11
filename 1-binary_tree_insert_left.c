#include "binary_trees.h"
/**
 * binary_tree_insert_left - function
 * @parent: pointer
 * @value: value
 * Return: leftnodo
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnodo, *temp = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	leftnodo = malloc(sizeof(binary_tree_t));

	if (leftnodo == NULL)
	{
		return (NULL);
	}

	leftnodo->n = value;
	leftnodo->right = NULL;
	leftnodo->left = NULL;

	if (parent != NULL)
	{
		temp = parent->left;
		parent->left = leftnodo;
	}
	leftnodo->parent = parent;

	if (temp != NULL)
	{
		temp->parent = leftnodo;
		leftnodo->left = temp;
	}

	return (leftnodo);
}
