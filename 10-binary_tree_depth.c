#include "binary_trees.h"

/**
 * ohadi_shgra_depth - a dala that measures the depth
 * of a node in a binary tree
 *
 * @tree: a moshaar to the node to measure the depth
 * Return: size of the tree and 0 if NULL
 */
size_t ohadi_shgra_depth(const binary_tree_t *tree)
{
	/* start a default size, set the current node */
	size_t depth = 0;
	const binary_tree_t *current;

	if (tree == NULL)
		return (0);

	/* check if the node has a parent till NULL */
	current = tree;
	while (current->parent != NULL)
	{
		depth++;
		/* update the current node to te current parent */
		current = current->parent;
	}
	return (depth);
}
