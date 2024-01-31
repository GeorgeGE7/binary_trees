#include "binary_trees.h"

/**
 * ohadi_shgra_size - a dala that measures the size of a binary tree
 * @tree: a moshaar to the root node of the tree to measure the size
 * Return: Size of the tree or 0 if NULL
 */

size_t ohadi_shgra_size(const binary_tree_t *tree)
{
	/* set var for left and right size */
	size_t leftS,
	       rightS,
	       size;

	if (tree == NULL)
		return (0);

	/* set the values of the sizes */
	leftS = ohadi_shgra_size(tree->left);
	rightS = ohadi_shgra_size(tree->right);

	/* Sum all sizes plus the current node */
	size = 1 + leftS + rightS;

	return (size);
}
