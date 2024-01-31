#include "binary_trees.h"

/**
 * ohadi_shgr_mlt_ghztrt - a function that goes through
 * a binary tree using pre-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: Nothing
 */
void ohadi_shgr_mlt_ghztrt(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Call the fuction to the current node */
	func(tree->n);

	/* recursively traverse the left and right subtree */
	ohadi_shgr_mlt_ghztrt(tree->left, func);
	ohadi_shgr_mlt_ghztrt(tree->right, func);
}
