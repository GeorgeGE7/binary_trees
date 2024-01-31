#include "binary_trees.h"

/**
 * ohadi_shgr_mlt_artfa - a function that measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height.
 * Return: The height of the tree or 0 if NULL
 */

size_t ohadi_shgr_mlt_artfa(const binary_tree_t *tree)
{
	/* set a var for right and left heights with init value */
	size_t leftH = 0,
	       rightH = 0,
	       height;

	if (tree == NULL)
		return (0);

	/* set the values for each height */
	leftH = tree->left ? 1 + ohadi_shgr_mlt_artfa(tree->left) : 0;
	rightH = tree->right ? 1 + ohadi_shgr_mlt_artfa(tree->right) : 0;

	/* find the maximum height */
	height = leftH > rightH ? leftH : rightH;
	return (height);
}
