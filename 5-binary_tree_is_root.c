#include "binary_trees.h"

/**
 * ohadi_shgr_mlt_gzr - a function that checks if a given node is a root
 * @node: a pointer to the node to check
 * Return: 1 if node is a root, otherwise 0
 */
int ohadi_shgr_mlt_gzr(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
