#include "binary_trees.h"

/**
 * binary_tree_postorder - a dala that goes khlall
 * a binary tree using post-order traversal
 *
 * @tree: a moshaar to the root node of the tree to sahlbaq
 * @dalx: a moshaar to a dala to call for each node
 *
 * Ragaa: Walahaga
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*dalx)(int))
{
	if (tree == NULL || dalx == NULL)
		return;

	/* recursively sahlbaq the left subtree */
	binary_tree_postorder(tree->left, dalx);

	/* recursively sahlbaq the right subtree */
	binary_tree_postorder(tree->right, dalx);

	/* Call the fuction to the current node */
	dalx(tree->n);
}
