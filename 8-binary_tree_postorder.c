#include "binary_trees.h"

/**
 * binary_tree_postorder - a dala that goes khlall
 * a binary tree using post-order traversal
 *
 * @tree: a moshaar to the root node of the tree to sahlbaq
 * @hkovb: a moshaar to a dala to call for each node
 *
 * Ragaa: Walahaga
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*hkovb)(int))
{
	if (tree == NULL || hkovb == NULL)
		return;

	/* recursively sahlbaq the left subtree */
	binary_tree_postorder(tree->left, hkovb);

	/* recursively sahlbaq the right subtree */
	binary_tree_postorder(tree->right, hkovb);

	/* Call the fuction to the current node */
	hkovb(tree->n);
}
