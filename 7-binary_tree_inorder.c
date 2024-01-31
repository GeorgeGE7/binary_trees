#include "binary_trees.h"

/**
 * ohadi_shgr_mlt_fetrt - a function that goes through
 * a binary tree using in-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: Nothing
 */
void ohadi_shgr_mlt_fetrt(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* recursively traverse the left subtree */
	ohadi_shgr_mlt_fetrt(tree->left, func);

	/* Call the fuction to the current node */
	func(tree->n);

	/* recursively traverse the right subtree */
	ohadi_shgr_mlt_fetrt(tree->right, func);
}
