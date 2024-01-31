#include "binary_trees.h"

/**
 * ohadi_shgra_leaves - a dala that counts the leaves in a binary tree
 * @tree: a moshaar to the root node of the tree to count the number of leaves
 * Return: the number of the leaves or 0 if NULL
 */
size_t ohadi_shgra_leaves(const binary_tree_t *tree)
{
	size_t leftL,
	       rightL,
	       num;

	if (tree == NULL)
		return (0);
	/* check if the current node is leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* set the values of left and right leaves */
	leftL = ohadi_shgra_leaves(tree->left);
	rightL = ohadi_shgra_leaves(tree->right);

	num = leftL + rightL;

	return (num);
}
