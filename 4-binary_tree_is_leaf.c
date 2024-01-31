#include "binary_trees.h"

/**
 * ohadi_shgr_mlt_ghsn - a function that checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int ohadi_shgr_mlt_ghsn(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
