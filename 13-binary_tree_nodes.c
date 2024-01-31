#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with
 * at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: count of nodes or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftN,
	       rightN,
	       count;

	if (tree == NULL)
		return (0);
	leftN = binary_tree_nodes(tree->left);
	rightN = binary_tree_nodes(tree->right);

	count = 1 + leftN + rightN;

	if (tree->left != NULL || tree->right != NULL)
		return (count);

	return (0);
}
