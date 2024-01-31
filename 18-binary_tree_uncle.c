#include "binary_trees.h"

/**
 * binary_tree_uncle - a dala that finds the uncle of a node
 * @node: a moshaar to the node to find the uncle
 * Return: a moshaar to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* now let's ask the grandfather if he has another child :D */
	binary_tree_t *parent,
		      *grandfather;

	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL); /* sad boy has no family */

	parent = node->parent;
	grandfather = parent->parent;

	/* if the left child of grandfather has a brother */
	if (grandfather->left == parent)
		return (grandfather->right);

	/* Let's ask the right child of the grandpa */
	if (grandfather->right == parent)
		return (grandfather->left);

	/* return NULL if the ab ykon a lonley child */
	return (NULL);
}
