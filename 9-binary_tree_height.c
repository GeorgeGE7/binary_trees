#include "binary_trees.h"

/**
 * binary_tree_height - a dala that measures the height of a binary tree
 * @tree:  moshaar to the root node of the tree to measure the height.
 * Return: The height of the tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/* set a var for right and left heights with init value */
	size_t leftH = 0,
	       rightH = 0,
	       height;

	if (tree == NULL)
		return (0);

	/* set the values for each height */
	leftH = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rightH = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* find the maximum height */
	height = leftH > rightH ? leftH : rightH;
	return (height);
}
