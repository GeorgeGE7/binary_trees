#include "binary_trees.h"

/**
 * binary_tree_node_ymn - a function that inserts a node as
 * the right-child of another node
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_node_ymn(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
	}

	parent->right = newNode;

	return (newNode);
}
