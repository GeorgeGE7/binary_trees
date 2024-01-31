#include "binary_trees.h"

/**
 * ohadi_shgrr_mlts - a function that counts the nodes with
 * at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: count of nodes or 0 if NULL
 */
size_t ohadi_shgrr_mlts(const binary_tree_t *tree)
{
	size_t leftN,
	       rightN,
	       count;

	if (tree == NULL)
		return (0);
	leftN = ohadi_shgrr_mlts(tree->left);
	rightN = ohadi_shgrr_mlts(tree->right);

	count = 1 + leftN + rightN;

	if (tree->left != NULL || tree->right != NULL)
		return (count);

	return (0);
}
