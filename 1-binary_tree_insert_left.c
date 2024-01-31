#include "binary_trees.h"

/**
 * ohadi_shgrr_mlt_shml - a function that inserts a node as
 * the left-child of another node
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *ohadi_shgrr_mlt_shml(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = ohadi_shgrr_mlt(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}

	parent->left = newNode;

	return (newNode);
}
